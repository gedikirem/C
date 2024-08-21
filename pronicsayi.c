//Girilen sayýnýn Pronic (ardýþýk iki sayýnýn çarpýmýna eþit) olup olmadýðýný bulunuz. (2, 6,12, 20, …, 132, 156, ..)
#include<stdio.h>
int main(){
	int sayi,i,kontrol=0;
	printf("Sayi giriniz:");
	scanf("%d",&sayi);
	for(i=1;i<=sayi;i++){
		if(i*(i+1)==sayi){
			kontrol++;
		}
	}
	if(kontrol!=0)
	printf("Pronic sayi");
	else
	printf("Pronic sayi degil");
}
