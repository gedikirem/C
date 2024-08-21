//Baðlý Liste 14.Soru

#include<stdio.h>
#include<stdlib.h>

struct Dugum{
	int veri;
	struct Dugum* sonraki;
};

struct Dugum* Baslangic=NULL;
void DugumEkle(int veri){
	struct Dugum* yeniDugum=(struct Dugum*)malloc(sizeof(struct Dugum));
	yeniDugum->veri=veri;
	yeniDugum->sonraki=NULL;
	if(Baslangic==NULL){
		Baslangic=yeniDugum;
	}
	else{
		struct Dugum* gecici=Baslangic;
		while(gecici->sonraki!=NULL){
			gecici=gecici->sonraki;	
		}
		gecici->sonraki=yeniDugum;		
	}	
}
void DugumSil(){
	while(Baslangic!=NULL){
		struct Dugum* gecici=Baslangic;
		Baslangic=Baslangic->sonraki;
		free(gecici);
	}	
}
void Yazdir(){
	struct Dugum* gecici=Baslangic;
	printf("Liste: ");
	while(gecici!=NULL){	
		printf("%d ",gecici->veri);
		gecici=gecici->sonraki;
	}
	printf("\n");
}
int main(){
	DugumEkle(1);
	DugumEkle(2);
	DugumEkle(3);
	DugumEkle(4);
	Yazdir();
	DugumSil();
	Yazdir();
}
