//pointer:gösterici
//bir degişkenin adresini pointer tutar
#include<stdio.h>
int main(){
	int sayi;
	printf("bir sayi giriniz:");
	scanf("%d",&sayi);
	printf("sayi:%d sayi adresi:%d  sayinin tam adresi:%p",sayi,&sayi,&sayi);
	int *p;//yıldız işareti pointer olduğunu gösterir
	p=&sayi;
	//int *x=&sayi-gösterim şekilleri
	printf("\n p degeri:%p",p);
	printf("\n p adresindeki deger:%d",*p);
}
