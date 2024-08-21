//pointer malloc fonksiyonu
//bellekten yer ayýrmak için kullanýlýr.örn int için 4 byte ,char için 1 byte ,float için 8 byte
//cast -tip dönüþümü
#include<stdio.h>
int main(){
	//int *x=5 printf("%d",*x)YANLIÞ
	
	int *x=(int*)malloc(sizeof(int));//bellekten yer ayýrýr
	printf("x adresi:%p \n",x);
	printf("x degeri:%d \n",*x);
	
	if(x==NULL){
		//bellekten yer ayrýlamazsa
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
