#include <stdlib.h>
#include<stdio.h>
struct Node {
	int data;
	struct Node *sonraki;//listede sonraki d���m�n adresini tutyor
};

struct Node *ilk=NULL;//Global de�i�ken listenin ilk d���m�n�,eleman�n�, tutar (her yerde kullan�labilir) ve  her zaman kullan�caz da
//�lk d���m� tutmazsak di�erlerine ula�amay�z
//ilk =NULL dedik ��nk� hen�z liste bo�
void SonaEkle(int veri){
	// �nce gelen datan�n �zerine  eklenece�i d���m yap�s�n� tan�mlamam�z gerek
	//her d���m eklerken mutlaka bellekten yeni bir alan a�acaz
	struct Node *yeni=(struct Node*)malloc(sizeof(struct Node));
	yeni->data=veri;
	yeni->sonraki=NULL;
	//Liste bo� ise ilk=yeni;
	//Listede 1 eleman varsa :ilk->sonraki=yeni;(asl�nda 1. ve 2. ihtimal ayn� �ey)
	//yani listede bir eleman varsa hem ilk hem son elemand�r
	//Listede 1 den fazla eleman vars :enson->sonraki=yeni;
	if(ilk==NULL){//listenin bo� olma ihtimalini her zaman kontrol ederiz
		ilk=yeni;//liste bo� ise yeni d���m� ilk d���me aktar
	}
	else{
		//listenin t�m�n� dola��p en son d���m� bul
		//gecici de�i�keni sadece listeyi dola�mak i�in kullan�r�z sonra onunla i�imiz biter
		//d���mlerin adresini tutar bu y�zden pointer
		struct Node *gecici=ilk;//�nce ilk d���m� tutmak i�in ge�ici bir pointer tan�mlad�k sonras�nda her seferde kendini g�ncelleyecek
	//	gecici=ilk->sonraki;//gecici=2.d���m 456
	//	gecici=ilk->sonraki->sonraki;//gecici=3.d���m
	//	gecici=ilk->sonraki->sonraki->sonraki//gecici=4.d���m
	
		while(gecici->sonraki!=NULL){//gecicinin sonraki bo� olmad��� s�rece devam et
		//son d���me kadar ilerle
		//gecici art�k ilkin sonraki oldu�undan yukardaki yorum sat�rlar� bkz.456
		gecici=gecici->sonraki;//1.ad�mda gecici=2.d���m
		//2.ad�mda:gecici=3.d���m
		//3.ad�mda:gecici=4.d���m
		}
		//ge�ici=son d���m
		gecici->sonraki=yeni;//son->sonraki=yeni
		//burda yapt���m�z �ey asl�nda:
		// int x=2;
		// int *x=4 dedi�imizde x=4 yapm�� olduk
	}
		printf("%d eklendi.\n",veri);
}
void BasaEkle(int veri){
	struct Node *yeni=(struct  Node*)malloc(sizeof(struct Node));
	yeni->data=veri;
	yeni->sonraki=NULL;
	if(ilk==NULL){//Liste bo� ise(her zaman kontrol edilir)
		ilk=yeni;
	}
	else{
		yeni->sonraki=ilk;//yeni d���mle listenin ba�� aras�nda ba�lant� sa�lad�k(�Z)
		ilk=yeni;//ilk i her zaman g�ncellememiz gerek listenin ilk eleman�n� tuttu�undan di�er elemanlara ula�mak i�in �nemli ,global bir de�i�ken(�Z)
	}
	printf("%d eklendi.\n",veri);
}
void ArayaEkle(int veri,int aranan){
	struct Node *yeni=(struct Node*)malloc(sizeof(struct Node));
	yeni->data=veri;
	yeni->sonraki=NULL;
	if(ilk==NULL){//Liste bo� ise(her zaman kontrol edilir)
		ilk=yeni;
	}
	else{
		struct Node* gecici=ilk;//asl�nda elimizde hep ilk eleman var ,geciciyi bir strcut tipinde pointer alarak bu elemandan ba�layarak listeyi dola��yor
		while(gecici!=NULL){//listede eleman var oldu�u s�rece devam edecek ,burda en son elaman� aram�yoruz
			if(gecici->data==aranan){//gecicinin datas�(int)arad���m say�ya e�it mi bak�l�r,(gecici pointer)
			//hangi elemandan sonra eklenecekse onu buluyor(yukar�daki kod)
			yeni->sonraki=gecici->sonraki;//yeni d���m (sonras�na)eklenecek d���mden sonraya ba�lan�r (23 24 e ba�lan�r) �r: 22 (sonras�na ekl.d���m )23(yeni d���m) 24 var 
			gecici->sonraki=yeni;//sonras�na eklenecek d���m yeni d���me(22 23 e ba�lan�r ) ba�lan�r
			printf("%d eklendi.\n",veri);
			return;
		}
		gecici=gecici->sonraki;//d�ng�n�n devam etmesi i�in ge�iciyi g�ncellemem gerek
	}
}
}
void ElemanSil(int aranan){
	if(ilk==NULL){
		printf("Liste Bos!\n");
	}
	else{
		struct Node* gecici=ilk;//silecegimiz eleman�n yerini kaybetmemek i�in
		if(ilk->data==aranan){//Listenin ba��ndali ilk eleman silinecekse
			ilk=ilk->sonraki;//ilkin sonraki 2.eleman� g�sterir yani 2.eleman� ilk elemana atad�k
			free(gecici);//bellekten tamamen silmek i�in bu komutu kulland�k
		}
		else{//Listenin sonunda veya arada olabilir
		struct Node* silinecek;
		while(gecici->sonraki!=NULL){
			if(gecici->sonraki->data==aranan){
				silinecek=gecici->sonraki;
				gecici->sonraki=silinecek->sonraki;
				free(silinecek);
				printf("%d silindi.\n",aranan);
				return;
			}
			gecici=gecici->sonraki;
		}			
		}
	}
}
void ortalamadanKucukOlanlariSil(){
	/*
	1.ortalama bul
	2.yeni d�ng� olu�turup ortalamadan k���k olanlar� sil fonksiyonuna g�nder

	*/
	int toplam=0,ort,i=0;
	struct Node *gecici=ilk;
	while(gecici!=NULL){
		toplam=toplam+gecici->data;
		i++;
		gecici=gecici->sonraki;	
	}
	ort=toplam/i;
	gecici=ilk;
	while(gecici!=NULL){
		if(gecici->data<ort){
		ElemanSil(gecici->data);
		}
		gecici=gecici->sonraki;	
	}
	
}
struct Node* Ara(int aranan){//Aranan d���m�n kendisini d�ndersin zaten strcut tipinde
	if(ilk==NULL){
		printf("Liste Bos");
	}
	else{
		struct Node *gecici=ilk;
		while(gecici!=NULL){
		if(gecici->data==aranan){
			return gecici;
		}
		gecici=gecici->sonraki;
		}	
	}
	return NULL;//bulunamazsa NULL d�ndersin
}
struct Node* KonumBul(int aranan){//4.soru
	int i=0;
	if(ilk==NULL){
		printf("Liste Bos");
	}
	else{
		struct Node *gecici=ilk;
		while(gecici!=NULL){
			i++;
		if(gecici->data==aranan){
			printf("%d degeri %d.indekstedir",aranan,i);
			return i;
		}
		gecici=gecici->sonraki;
		}	
	}
	return NULL;//bulunamazsa NULL d�ndersin
}

void KonumAra(int konum){//5.soru
	if(ilk==NULL){
		printf("Liste Bos");
		return ;
	}
	struct Node *gecici=ilk;
	int sayac=0;
	while(gecici!=NULL){
		sayac++;
		if(sayac==konum){
			printf("%d. indeksteki deger:%d",konum,gecici->data);
			return ;
		}
			gecici=gecici->sonraki;
	}
	printf("Bu konum listede bulunamamistir");
	
}
void KonumaGoreGuncelle(int konum,int yenideger){//7.soru
	if(ilk==NULL){
		printf("Liste Bos");
		return ;
	}
	struct Node *gecici=ilk;
	int sayac=0;
	while(gecici!=NULL){
		sayac++;
		if(sayac==konum){
			gecici->data=yenideger;//mevcut konumdaki de�eri de�i�tir
			printf("%d. indeksteki deger:%d ile guncellendi",konum,gecici->data);
			return ;
		}
			gecici=gecici->sonraki;
	}
	printf("Bu konum listede bulunamamistir");
	
}
void SayiyaGoreGuncelle(int sayi,int yenideger){//8.soru
	if(ilk==NULL){
		printf("Liste Bos");
		return ;
	}
	struct Node *gecici=ilk;
	while(gecici!=NULL){
		
		if(gecici->data==sayi){
			gecici->data=yenideger;//mevcut konumdaki de�eri de�i�tir
			printf("%d sayisi %d ile guncellendi",sayi,yenideger);
			return ;
		}
			gecici=gecici->sonraki;
	}
	printf("Bu konum listede bulunamamistir");
	
}
void Listele(){
	int toplam=0;
	int i=0;
	printf("\nListele:");
	struct Node *gecici=ilk;//her zaman geciciyi ilkten ba�lat�r�z  global bir de�i�ken
    while(gecici!=NULL){
    	printf("%d ",gecici->data);
    	gecici=gecici->sonraki;
	}
}


void OzyinelemeListele(struct Node *gecici){
	if(gecici==NULL){
		return;
	}
	printf("Ozyinelemeli olarak :%d\n",gecici->data);
	OzyinelemeListele(gecici->sonraki);	
}
void TersOzyinelemeListele(struct Node *gecici){
	if(gecici==NULL){
		return;
	}
	TersOzyinelemeListele(gecici->sonraki);	
	printf("TersOzyinelemeli olarak :%d\n",gecici->data);
}

/*
Ba�l� listeyi tersten yazd�rmak i�in 2.bir ba�l� listse alabiliriz
1.Liste: 2 4 5
2.Liste: 5 4 2(s�rekli ba�a ekle metodunu �a��rarark yazd�rabiliriz   )


*/
int main(){

 SonaEkle(12);
 SonaEkle(3);
 SonaEkle(15);
 SonaEkle(9);
 Listele();


 BasaEkle(15);
 ArayaEkle(25,24);
  KonumAra(2);
 SayiyaGoreGuncelle(15,43);
 Listele();
 ElemanSil(44);
 TersOzyinelemeListele(ilk);

 Listele();
 struct Node* sonuc=Ara(24);
 
 if(sonuc==NULL){
 	 printf("Sonuc Bulunamad�");
 }

 else{
 printf("%d bulundu sonrasindaki sayi=%d\n",sonuc->data,sonuc->sonraki->data);
 }

 
 
//	struct Node ogr1=(struct Node*)malloc(sizeof(struct Node));
//	ogr1->ogrNo=22;
////	ogr1->sonraki=NULL;
//	
//	struct Node ogr2=(struct Node*)malloc(sizeof(struct Node));
//	ogr2->ogrNo=25;
////	ogr2->sonraki=NULL;
//	
//	struct Node ogr3=(struct Node*)malloc(sizeof(struct Node));
//	ogr3->ogrNo=44;
////	ogr3->sonraki=NULL;
//	
//	ogr1->sonraki=ogr3;
//	ogr3->sonraki=ogr2;
//	ogr2->sonraki=NULL;
}
