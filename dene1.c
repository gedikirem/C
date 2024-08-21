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
	if(ilk=NULL){
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
		//geçici=son
		gecici->sonraki=yeni;//son->sonraki=yeni
	}
		printf("%d eklendi.\n",veri);
}

void Listele(){
	struct Node *gecici=ilk;
	while(gecici!=NULL){
		printf("%d ",gecici->data);
		gecici=gecici->sonraki;
	}
	
}

int main(){
	
 SonaEkle(22);
 SonaEkle(25);
 SonaEkle(44);
 Listele();
}
