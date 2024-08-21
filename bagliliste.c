// 3 Tane düðüm oluþtutup birbirine baðlama
//Struct tipindeki pointer için " -> "iþareti kullanýlýr
//Tam sayýlar için " . " kullanýlýr
#include<stdio.h>
struct Node {
	int data;//önceden ogrNo
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
	// önce gelen datanýn üzerine  ekleneceði düðüm yapýsýný tanýmlamamýz gerek	
//	ogr1->ogrNo=22;
//	ogr1.sonraki=NULL; zaten atamasýný yaptýðýmýz için gererk kalmadý
	//bellekten struct Node kadar yer ayýrýr
	//yani düðüm yapýsýnýn içerisinde ne kadar deðiþken varsa hepsinin
	//kaplayaðý kadar bellekten yer ayýrýr,o yüzden  sizeof un içinde struct Node var
	//Bu bir düðüm için ,mesela 10 tane düðüm varsa 10la çarparýz
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
	//ogr1 in sonraki struct Node tipinde olmalý bu yüzden ogr2 yi  direkt yazabiliriz
	//Sýra önemli deðil 1 den sonra 3 de gelebilir
}
