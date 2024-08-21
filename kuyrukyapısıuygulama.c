#include<stdio.h>
#define boyut 5

int kuyruk[boyut],ilk=-1,son=-1;
void Ekle(int veri){
	if(son==boyut){
		printf("Kuyruk Dolu\n");
	}
	else {
		if(ilk==-1){
			ilk=0;
		}
		son++;
		kuyruk[son]=veri;
	}
}

void Cikar(){
if(ilk==-1||ilk>son){
		printf("Kuyruk Boþ\n");
		ilk=-1;
		son=-1;
}
else{
	ilk++;
}
}

void Yazdir(){
int i;
for(i=ilk;i<=son;i++){
	printf("%d",kuyruk[i]);
}
}

int main(){
	int secim;
	while(1==1){
		printf("\nEkleme");
		printf("\nCikarma\n");
		printf("Yapmak istediginiz islemi seciniz\n");
		scanf("%d",&secim);
		
		switch(secim){
			case 1:
			printf("\nVeri Girin:");
			scanf("%d",&secim);
			Ekle(secim);
			Yazdir();
			break;
			
			case 2:
			Cikar();
			Yazdir();
			break;
		}
	}
	
	
	
}

