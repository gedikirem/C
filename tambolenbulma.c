//Problemler(D�ng�sel i�lemler-2)
//1. Verilen bir say�n�n tam b�lenlerini bulan algoritma
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
