#include<stdio.h>
#include<stdlib.h>

typedef struct Agac
{
	struct Agac *sol;
	struct Agac *sag;
	int veri;
}Agac;

Agac *kok=NULL;//kök elemaný tutmak için global deðiþken tanýmladýk
Agac * Ekle(Agac *dugum,int veri)
{
	if(dugum==NULL)
	{
		Agac *yeniDugum=(Agac *)malloc(sizeof(Agac));//mallocla yeni düðüm oluþturduk
		yeniDugum->veri=veri;
		yeniDugum->sol=NULL;
		yeniDugum->sag=NULL;
		return yeniDugum;		
	}
	//peki boþ düðümü nasýl baðlayacaðýz
	//yeni gelen sayý mevcut düðümün verisinden büyükse sað tarafa ekle ve return et
	if(veri > dugum->veri)
	{
		dugum->sag=Ekle(dugum->sag,veri);//özyinelemeli olarak ekleniyor
		return dugum;
	}
	//deðilse sol tarafa ekle
	dugum->sol=Ekle(dugum->sol,veri);
	return dugum;
}
void PostOrder(Agac *dugum){//Sonda Kök
	if(dugum==NULL){
		return;
	}
	PostOrder(dugum->sol);
	PostOrder(dugum->sag);
	printf("%d",dugum->veri);
}
void InOrder(Agac *dugum){//Ortada Kök,küçükten büyüðe yazdýrýr
	if(dugum == NULL)
	return;
	InOrder(dugum->sol);
	printf("%d",dugum->veri);
	InOrder(dugum->sag);
}
void PreOrder(Agac *dugum){//Önce kök
	if(dugum==NULL)
	return;
	printf("%d",dugum->veri);
	PreOrder(dugum->sol);
	PreOrder(dugum->sag);
}
void BuyuktenKucuge(Agac *dugum){// büyükten küçüðe yazdýrýr,en büyük sayý en saðda olduðuundan
	if(dugum==NULL)
	return;
	BuyuktenKucuge(dugum->sag); 
	printf("%d ",dugum->veri);
	BuyuktenKucuge(dugum->sol);
}
int EnBuyukBul(Agac *dugum){//GetMax
	while(dugum->sag!=NULL)
	dugum=dugum->sag;
	
	return dugum->veri;
}

int Bul(Agac *dugum,int aranan){//arama iþlemi için
	if(dugum == NULL)
	return -1;
	if(dugum->veri == aranan)
	return 1;
	if(Bul(dugum->sag,aranan)==1)//büyükse sað tarafa git
	return 1;
	if(Bul(dugum->sol,aranan)==1)//küçükse sað tarafa git
	return 1;
	return -1;
}
main()
{
	kok=Ekle(kok,10 );
	Ekle(kok, 7 );
	Ekle(kok, 6 );
	Ekle(kok, 88 );
	Ekle(kok, 5 );
	Ekle(kok, 61 );
	Ekle(kok, 120 );
	printf("\n PRE ORDER ");
	PreOrder(kok);
	printf("\n POST ORDER ");
	PostOrder(kok);
	printf("\n IN ORDER ");
	InOrder(kok);
	
	printf("\n BuyuktenKucuge:");
	BuyuktenKucuge(kok);
	printf("En buyuk :%d",EnBuyukBul(kok));
}

