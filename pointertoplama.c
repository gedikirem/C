//1. Girilen 2 say�y� sadece pointer de�i�kenler kullanarak toplay�n�z.
#include<stdio.h>
int main(){
	int *p=(int*)malloc(sizeof(float));
	int *m=(int*)malloc(sizeof(int));
	printf("iki sayi giriniz:");
	scanf("%d %d",p,m);
	printf("toplam:%d",*p+*m);	
}
