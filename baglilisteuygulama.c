#include <stdlib.h>
#include<stdio.h>
struct Node {
	int data;
	struct Node *sonraki;//listede sonraki düðümün adresini tutyor
};

struct Node *ilk=NULL;//Global deðiþken listenin ilk düðümünü,elemanýný, tutar (her yerde kullanýlabilir) ve  her zaman kullanýcaz da
//Ýlk düðümü tutmazsak diðerlerine ulaþamayýz
//ilk =NULL dedik çünkü henüz liste boþ
void SonaEkle(int veri){
	// önce gelen datanýn üzerine  ekleneceði düðüm yapýsýný tanýmlamamýz gerek
	//her düðüm eklerken mutlaka bellekten yeni bir alan açacaz
	struct Node *yeni=(struct Node*)malloc(sizeof(struct Node));
	yeni->data=veri;
	yeni->sonraki=NULL;
	//Liste boþ ise ilk=yeni;
	//Listede 1 eleman varsa :ilk->sonraki=yeni;(aslýnda 1. ve 2. ihtimal ayný þey)
	//yani listede bir eleman varsa hem ilk hem son elemandýr
	//Listede 1 den fazla eleman vars :enson->sonraki=yeni;
	if(ilk==NULL){//listenin boþ olma ihtimalini her zaman kontrol ederiz
		ilk=yeni;//liste boþ ise yeni düðümü ilk düðüme aktar
	}
	else{
		//listenin tümünü dolaþýp en son düðümü bul
		//gecici deðiþkeni sadece listeyi dolaþmak için kullanýrýz sonra onunla iþimiz biter
		//düðümlerin adresini tutar bu yüzden pointer
		struct Node *gecici=ilk;//önce ilk düðümü tutmak için geçici bir pointer tanýmladýk sonrasýnda her seferde kendini güncelleyecek
	//	gecici=ilk->sonraki;//gecici=2.düðüm 456
	//	gecici=ilk->sonraki->sonraki;//gecici=3.düðüm
	//	gecici=ilk->sonraki->sonraki->sonraki//gecici=4.düðüm
	
		while(gecici->sonraki!=NULL){//gecicinin sonraki boþ olmadýðý sürece devam et
		//son düðüme kadar ilerle
		//gecici artýk ilkin sonraki olduðundan yukardaki yorum satýrlarý bkz.456
		gecici=gecici->sonraki;//1.adýmda gecici=2.düðüm
		//2.adýmda:gecici=3.düðüm
		//3.adýmda:gecici=4.düðüm
		}
		//geçici=son düðüm
		gecici->sonraki=yeni;//son->sonraki=yeni
		//burda yaptýðýmýz þey aslýnda:
		// int x=2;
		// int *x=4 dediðimizde x=4 yapmýþ olduk
	}
		printf("%d eklendi.\n",veri);
}
void BasaEkle(int veri){
	struct Node *yeni=(struct  Node*)malloc(sizeof(struct Node));
	yeni->data=veri;
	yeni->sonraki=NULL;
	if(ilk==NULL){//Liste boþ ise(her zaman kontrol edilir)
		ilk=yeni;
	}
	else{
		yeni->sonraki=ilk;//yeni düðümle listenin baþý arasýnda baðlantý saðladýk(ÖZ)
		ilk=yeni;//ilk i her zaman güncellememiz gerek listenin ilk elemanýný tuttuðundan diðer elemanlara ulaþmak için önemli ,global bir deðiþken(ÖZ)
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
		while(gecici!=NULL){//listede eleman var olduðu sürece devam edecek ,burda en son elamaný aramýyoruz
			if(gecici->data==aranan){//gecicinin datasý(int)aradýðým sayýya eþit mi bakýlýr,(gecici pointer)
			//hangi elemandan sonra eklenecekse onu buluyor(yukarýdaki kod)
			yeni->sonraki=gecici->sonraki;//yeni düðüm (sonrasýna)eklenecek düðümden sonraya baðlanýr (23 24 e baðlanýr) ör: 22 (sonrasýna ekl.düðüm )23(yeni düðüm) 24 var 
			gecici->sonraki=yeni;//sonrasýna eklenecek düðüm yeni düðüme(22 23 e baðlanýr ) baðlanýr
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
		struct Node* gecici=ilk;//silecegimiz elemanýn yerini kaybetmemek için
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
void ortalamadanKucukOlanlariSil(){
	/*
	1.ortalama bul
	2.yeni döngü oluþturup ortalamadan küçük olanlarý sil fonksiyonuna gönder

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
struct Node* Ara(int aranan){//Aranan düðümün kendisini döndersin zaten strcut tipinde
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
	struct Node *gecici=ilk;//her zaman geciciyi ilkten baþlatýrýz  global bir deðiþken
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
Baðlý listeyi tersten yazdýrmak için 2.bir baðlý listse alabiliriz
1.Liste: 2 4 5
2.Liste: 5 4 2(sürekli baþa ekle metodunu çaðýrarark yazdýrabiliriz   )


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
