//Problemler(Döngüsel iþlemler-2)
//1. Verilen bir sayýnýn tam bölenlerini bulan algoritma
#include<stdio.h>
int main(){
	int i,sayi;
	printf("Sayi giriniz:\n");
	scanf("%d",&sayi);
	printf("Sayinin tam bolenleri:\n");
	
for(i=1;i<=sayi;i++){
	if(sayi%i==0){
		printf("%d\n",i);
	}
}
}
