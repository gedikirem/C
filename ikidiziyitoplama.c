//E�it uzunluktaki 2 dizinin ayn� endeksli elemanlar�n� toplama
#include<stdio.h>
int main(){
	srand(time(0));
	int dizi[5],dizi1[5],i;
	for(i=0;i<5;i++){
		dizi[i]=rand()%10;
		printf("%d\n",dizi[i]);
		dizi1[i]=rand()%10;
	}
	printf("*\n");
	for(i=0;i<5;i++){
	printf("%d\n",dizi1[i]);
	}
	printf("*\n");
	for(i=0;i<5;i++){
	printf("%d.toplam:%d\n",i+1,dizi[i]+dizi1[i]);
}
}
