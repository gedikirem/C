// 3 Tane d���m olu�tutup birbirine ba�lama
//Struct tipindeki pointer i�in " -> "i�areti kullan�l�r
//Tam say�lar i�in " . " kullan�l�r
#include<stdio.h>
struct Node {
	int data;//�nceden ogrNo
	struct Node *sonraki;
};
struct Node *ilk=NULL;

void SonaEkle(int veri){
	struct Node *yeni=(struct Node*)malloc(sizeof(struct Node));
	yeni->data=veri;
	yeni->sonraki=NULL;
	
	if(ilk==NULL){
   		ilk=yeni;
	   }
	   else{
	   		
       struct Node *gecici=ilk;
       while(gecici->sonraki!=NULL){
   	
       gecici=gecici->sonraki;
       }
       
       gecici->sonraki=yeni;
	   }

   printf("%d eklendi\n",veri);
	
}
void BasaEkle(int veri){
	
	struct Node *yeni=(struct Node*)malloc(sizeof(struct Node));
	yeni->data=veri;
	yeni->sonraki=NULL;
	
	if(ilk==NULL){
		ilk=yeni;
	}
	else{
	    yeni->sonraki=ilk;
	    ilk=yeni;
	
	}	
}
void ArayaEkle(int veri,int aranan){
   struct Node *yeni=(struct Node*)malloc(sizeof(struct Node));
   yeni->data=veri;
   yeni->sonraki=NULL;
   
   if(ilk==NULL){
   	ilk=yeni;
   	
   }
   else{
   	struct Node *gecici=ilk;
   	while(gecici!=NULL){
   		if(gecici->data==aranan){
   			yeni->sonraki=gecici->sonraki;
   			gecici->sonraki=yeni;
   			return
		   }
		   gecici=gecici->sonraki;
	   }
   	
   }
}

void ElemanSil(int aranan){	
	if(ilk==NULL){
		printf("Liste Bos");
	}
	else{
		struct Node *gecici=ilk;
		if(ilk->data==aranan){
			ilk=ilk->sonraki;
			free(gecici);	
		}
		else{
			struct Node *silinecek;
			 while(gecici->sonraki==NULL){
			 if(gecici->sonraki->data==aranan){
				silinecek=gecici->sonraki;
				gecici->sonraki=silinecek->sonraki;
				free(silinecek);
				return			
			}
			gecici=gecici->sonraki
		}
		
	}
		
	}
}

struct Node *Ara(int aranan){
  if(ilk==NULL){
  	printf("Liste Bos");
  }
  else{
  	struct Node *gecici=ilk;
  	while(gecici!=NULL){
  		if(gecici->data==aranan){
  			return gecici;
		  }
		  gecici=gecici->sonraki
	  }
  }
	
	
}


int main(){
	SonaEkle(22);
	SonaEkle(44);
//	struct Node *ogr1=(struct Node*)malloc(sizeof(struct Node));
	// �nce gelen datan�n �zerine  eklenece�i d���m yap�s�n� tan�mlamam�z gerek	
//	ogr1->ogrNo=22;
//	ogr1.sonraki=NULL; zaten atamas�n� yapt���m�z i�in gererk kalmad�
	//bellekten struct Node kadar yer ay�r�r
	//yani d���m yap�s�n�n i�erisinde ne kadar de�i�ken varsa hepsinin
	//kaplaya�� kadar bellekten yer ay�r�r,o y�zden  sizeof un i�inde struct Node var
	//Bu bir d���m i�in ,mesela 10 tane d���m varsa 10la �arpar�z
//	
//	struct Node *ogr2=(struct Node*)malloc(sizeof(struct Node));
//	ogr2->ogrNo=25;
////	ogr2.sonraki=NULL;
//	struct Node *ogr3=(struct Node*)malloc(sizeof(struct Node));
//	ogr3->ogrNo=44;
////	ogr3.sonraki=NULL
//
//
//	ogr1->sonraki=ogr2;
//	ogr2->sonraki=ogr3;	
//	ogr3->sonraki=NULL;
	//ogr1 in sonraki struct Node tipinde olmal� bu y�zden ogr2 yi  direkt yazabiliriz
	//S�ra �nemli de�il 1 den sonra 3 de gelebilir
}
