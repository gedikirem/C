//pointer malloc fonksiyonu
//bellekten yer ay�rmak i�in kullan�l�r.�rn int i�in 4 byte ,char i�in 1 byte ,float i�in 8 byte
//cast -tip d�n���m�
#include<stdio.h>
int main(){
	//int *x=5 printf("%d",*x)YANLI�
	
	int *x=(int*)malloc(sizeof(int));//bellekten yer ay�r�r
	printf("x adresi:%p \n",x);
	printf("x degeri:%d \n",*x);
	
	if(x==NULL){
		//bellekten yer ayr�lamazsa
		printf("bellekten yer ayrilamadi!");
		exit(0);
	}
	
	*x=5;
	printf("x degeri:%d \n",*x);
	
	int *y;
	y=&x;
	
	printf("y adresi:%p\n",y);
	printf("y degeri:%d\n",*y);
	
	int *z=*y;
	printf("y dgerindeki adresin degeri:%d\n",*z);
	
}
