//Ýkili arama(Binary Searching):arama yapýlabilmesi 
//için dizinin sýralý olmasý gerek
#include<stdio.h>
int BinarySearch(int dizi[],int x,int aranan){
	int orta,bas=0,son=x;
	while(bas<son){
		orta=(bas+son)/2;
		if(aranan==dizi[orta]){
			return orta;
		}
		else if(dizi[orta]<aranan){
		
			 bas=orta+1;
		}
		else{
			son=orta-1;
	}
	}
	return -1;
}
int main(){
		int x;
	printf("Dizinin eleman sayisini girin:\n");
	scanf("%d",&x);
	int dizi[x],i=0;
	while(i<x){
		printf("Sayi giriniz:");
		scanf("%d",&dizi[i]);
		i++;
	}
	int aranan;
	printf("Aranan sayiyi giriniz:\n");
	scanf("%d",&aranan);
	int sonuc=BinarySearch(dizi,x,aranan);
	if(sonuc==-1){
		printf("Aranan sayi bulunamadi");
	}
	else{
		printf("Aranan sayi %d.indekste",sonuc+1);
	}
}
