//Baðlý Liste 12.Soru
#include<stdio.h>
#include<stdlib.h>
struct Dugum{
	int veri;
	struct Dugum* sonraki;
};


struct Dugum* DugumEkle(int veri){
	struct Dugum* yeniDugum=(struct Dugum*)malloc(sizeof(struct Dugum));
	yeniDugum->veri=veri;
	yeniDugum->sonraki=NULL;
}

void BasaEkle(struct Dugum**bas,int veri){//iþaretçinin iþaretçisi?
		struct Dugum* yeniDugum=DugumEkle(veri);
		yeniDugum->sonraki=*bas;
		*bas=yeniDugum;	
}
struct Dugum* tersListe(struct Dugum* liste){
	struct Dugum* ters=NULL;
	struct Dugum* suanki=liste;
	while(suanki!=NULL){
		BasaEkle(&ters,suanki->veri);
		suanki=suanki->sonraki;
	}	
	return ters;
}
void Yazdir(struct Dugum* liste){
	struct Dugum* suanki=liste;
	while(suanki!=NULL){
		printf("%d ",suanki->veri);
		suanki=suanki->sonraki;
	}
	printf("\n");
}
int main(){
	struct Dugum* liste=NULL;
	int sayi;
	printf("Sayi Giriniz:(-1 girilince program sonlandirilicek ve ters liste yazdirilecek)\n");
	while(1){
		printf("Sayi: ");
		scanf("%d",&sayi);	
		if(sayi==-1){
			break;
		}
		BasaEkle(&liste,sayi);
		
	}
	printf("ilk liste: ");
	Yazdir(liste);
	struct Dugum* ters=tersListe(liste);
	printf("Ters Liste: ");
	Yazdir(ters);

}


