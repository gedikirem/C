#include<stdio.h>
int guclusayi(int sayi){
	int i,basamak,sonuc=1,toplam=0;
	while(sayi>0){
		basamak=sayi%10;
		sonuc=1;
	for(i=1;i<=basamak;i++){
		sonuc*=i;
	}
	toplam=toplam+sonuc;
	sayi=sayi/10;
}
return toplam;
}
int main(){
	int sayi;
	printf("Bir sayi giriniz:");
	scanf("%d",&sayi);
	if(guclusayi(sayi)==sayi){
		printf("guclu sayi");
	}
		else{
		printf("guclu sayi degil");
		}
}
