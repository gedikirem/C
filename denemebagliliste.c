#include <stdlib.h>
#include<stdio.h>
struct Node {
	int data;
	struct Node *sonraki;//listede sonraki düðümün adresini tutyor
};

struct Node *ilk=NULL;//Global deðiþken listenin ilk düðümünü tutar (her yerde kullanýlabilir)

void SonaEkle(int veri){
	struct Node *yeni=(struct Node*)malloc(sizeof(struct Node));
	yeni->data=veri;
	yeni->sonraki=NULL;
	//Liste boþ ise ilk=yeni;
	//Listede 1 eleman varsa :ilk->sonraki=yeni;(aslýnda 1. ve 2. ihtimal ayný þey)
	//Listede 1 den fazla eleman vars :enson->sonraki=yeni;
	if(ilk==NULL){
		ilk=yeni;//liste boþ ise yeni düðümü ilk düðüme aktar
	}
	else{
		//listenin tümünü dolaþýp en son düðümü bul
		struct Node *gecici=ilk;//önce ilk düðümü tutmak için geçici bir pointer tanýmladýk sonrasýnda her seferde kendini güncelleyecek
	//	gecici=ilk->sonraki;//gecici=2.düðüm
	//	gecici=ilk->sonraki->sonraki;//gecici=3.düðüm
	//	gecici=ilk->sonraki->sonraki->sonraki//gecici=4.düðüm
	
		while(gecici->sonraki!=NULL){//son düðüme kadar ilerle
		gecici=gecici->sonraki;
		}
		//geçici=son düðüm
		gecici->sonraki=yeni;//son->sonraki=yeni
	}
		printf("%d eklendi.\n",veri);
}
void BasaEkle(int veri){
	struct Node *yeni=(struct Node*)malloc(sizeof(struct Node));
	yeni->data=veri;
	yeni->sonraki=NULL;
	if(ilk==NULL){//Liste boþ ise(her zaman kontrol edilir)
		ilk=yeni;
	}
	else{
		yeni->sonraki=ilk;//yeni düðümle listenin baþý arasýnda baðlantý saðladýk(ÖZ)
		ilk=yeni;//ilk i her zaman güncellememiz gerek ,global bir deðiþken(ÖZ)
	}
	printf("%d eklendi.\n",veri);
}
void ArayaEkle(int veri,int aranan){
	struct Node *yeni=(struct Node*)malloc(sizeof(struct Node));
	yeni->data=veri;
	yeni->sonraki=NULL;
	if(ilk==NULL){//Liste boþ ise(her zaman kontrol edilir)
		ilk=yeni;
	}
	else{
		struct Node* gecici=ilk;//aslýnda elimizde hep ilk eleman var ,geciciyi bir strcut tipinde pointer alarak bu elemandan baþlayarak listeyi dolaþýyor
		while(gecici!=NULL){
			if(gecici->data==aranan){//gecicinin datasý(int)aradýðým sayýya eþit mi bakýlýr,(gecici pointer)
			//hangi elemandan sonra beklenecekse onu buluyor(yukarýdaki kod)
			yeni->sonraki=gecici->sonraki;//yeni düðüm eklenecek düðümden sonraya baðlanýr
			gecici->sonraki=yeni;//sonrasýna eklenecek düðüm yeni düðüme baðlanýr
			printf("%d eklendi.\n",veri);
			return;
		}
		gecici=gecici->sonraki;//döngünün devam etmesi için geçiciyi güncellemem gerek
	}
}
}
void ElemanSil(int aranan){
	if(ilk==NULL){
		printf("Liste Bos!\n");
	}
	else{
		struct Node* gecici=ilk;
		if(ilk->data==aranan){//Listenin baþýndali ilk eleman silinecekse
			ilk=ilk->sonraki;//ilkin sonraki 2.elemaný gösterir yani 2.elemaný ilk elemana atadýk
			free(gecici);//bellekten tamamen silmek için bu komutu kullandýk
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
	return NULL;//bulunamazsa NULL döndersin
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
			gecici->data=yenideger;//mevcut konumdaki deðeri deðiþtir
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
			gecici->data=yenideger;//mevcut konumdaki deðeri deðiþtir
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
 	 printf("Sonuc Bulunamadý");
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
