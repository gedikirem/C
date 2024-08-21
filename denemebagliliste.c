#include <stdlib.h>
#include<stdio.h>
struct Node {
	int data;
	struct Node *sonraki;//listede sonraki d���m�n adresini tutyor
};

struct Node *ilk=NULL;//Global de�i�ken listenin ilk d���m�n� tutar (her yerde kullan�labilir)

void SonaEkle(int veri){
	struct Node *yeni=(struct Node*)malloc(sizeof(struct Node));
	yeni->data=veri;
	yeni->sonraki=NULL;
	//Liste bo� ise ilk=yeni;
	//Listede 1 eleman varsa :ilk->sonraki=yeni;(asl�nda 1. ve 2. ihtimal ayn� �ey)
	//Listede 1 den fazla eleman vars :enson->sonraki=yeni;
	if(ilk==NULL){
		ilk=yeni;//liste bo� ise yeni d���m� ilk d���me aktar
	}
	else{
		//listenin t�m�n� dola��p en son d���m� bul
		struct Node *gecici=ilk;//�nce ilk d���m� tutmak i�in ge�ici bir pointer tan�mlad�k sonras�nda her seferde kendini g�ncelleyecek
	//	gecici=ilk->sonraki;//gecici=2.d���m
	//	gecici=ilk->sonraki->sonraki;//gecici=3.d���m
	//	gecici=ilk->sonraki->sonraki->sonraki//gecici=4.d���m
	
		while(gecici->sonraki!=NULL){//son d���me kadar ilerle
		gecici=gecici->sonraki;
		}
		//ge�ici=son d���m
		gecici->sonraki=yeni;//son->sonraki=yeni
	}
		printf("%d eklendi.\n",veri);
}
void BasaEkle(int veri){
	struct Node *yeni=(struct Node*)malloc(sizeof(struct Node));
	yeni->data=veri;
	yeni->sonraki=NULL;
	if(ilk==NULL){//Liste bo� ise(her zaman kontrol edilir)
		ilk=yeni;
	}
	else{
		yeni->sonraki=ilk;//yeni d���mle listenin ba�� aras�nda ba�lant� sa�lad�k(�Z)
		ilk=yeni;//ilk i her zaman g�ncellememiz gerek ,global bir de�i�ken(�Z)
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
		while(gecici!=NULL){
			if(gecici->data==aranan){//gecicinin datas�(int)arad���m say�ya e�it mi bak�l�r,(gecici pointer)
			//hangi elemandan sonra beklenecekse onu buluyor(yukar�daki kod)
			yeni->sonraki=gecici->sonraki;//yeni d���m eklenecek d���mden sonraya ba�lan�r
			gecici->sonraki=yeni;//sonras�na eklenecek d���m yeni d���me ba�lan�r
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
		struct Node* gecici=ilk;
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
struct Node* Ara(int aranan){
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
	struct Node *gecici=ilk;
	while(gecici!=NULL){
		toplam=toplam+gecici->data;
		printf("%d ",gecici->data);
		gecici=gecici->sonraki;
		i++;
	
	}
	printf("Toplam:%d\n",toplam);//2.soru
	printf("Ortalama:%d\n",toplam/i);//2.soru
	printf("Dugum Sayisi:%d",i);//3.soru
	printf("\n");
}

int main(){

 SonaEkle(22);
 SonaEkle(24);
 SonaEkle(44);
 KonumAra(2);
 Listele();

 BasaEkle(15);
 ArayaEkle(25,24);
 SayiyaGoreGuncelle(15,43);
 Listele();
 ElemanSil(44);
 Listele();
 SirayaGoreEkle(5);
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
