//1. Girilen 2 sayýyý sadece pointer deðiþkenler kullanarak toplayýnýz.
#include<stdio.h>
int main(){
	int *p=(int*)malloc(sizeof(float));
	int *m=(int*)malloc(sizeof(int));
	printf("iki sayi giriniz:");
	scanf("%d %d",p,m);
	printf("toplam:%d",*p+*m);	
}
