//2. Girilen A ve B sayýlarýný yer deðiþtiren fonksiyonu yazýnýz.(Sayý alma ve sonuçlarý
//yazdýrma iþlemleri main’de yapýlacaktýr.)
#include<stdio.h>
int yerdegistirme(int *a,int *b){
	int *c=(int*)malloc(sizeof(int));  
    *c=*a;
	*a=*b;
	*b=*c;
}
int main(){
	int *p=(int*)malloc(sizeof(int));
	int *m=(int*)malloc(sizeof(int));
	printf("iki sayi giriniz:");
	scanf("%d %d",p,m);
	yerdegistirme(p,m);
	printf("*p=%d *m=%d",*p,*m);
}
