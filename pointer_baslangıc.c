//pointer:g�sterici
//bir degi�kenin adresini pointer tutar
#include<stdio.h>
int main(){
	int sayi;
	printf("bir sayi giriniz:");
	scanf("%d",&sayi);
	printf("sayi:%d sayi adresi:%d  sayinin tam adresi:%p",sayi,&sayi,&sayi);
	int *p;//y�ld�z i�areti pointer oldu�unu g�sterir
	p=&sayi;
	//int *x=&sayi-g�sterim �ekilleri
	printf("\n p degeri:%p",p);
	printf("\n p adresindeki deger:%d",*p);
}
