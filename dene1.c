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
	if(ilk=NULL){
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
		//ge�ici=son
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
