//Ýkili arama(Binary Searching):arama yapýlabilmesi 
//için dizinin sýralý olmasý gerek
#include<stdio.h>
int BinarySearch(int dizi[],int x,int aranan){
	int orta,bas=0,son=x,i=0;
	while(bas<son){
	if(orta%2==0){
		orta=dizi[(bas+son/2)];	
	}
	else if(orta%2!=0){
		orta=dizi[(bas+son/2)+1];
	}
		if(orta==aranan){
			return orta;
		}
		else if(orta<aranan){
		bas=orta+1;
		son=x;
		}
		else if(orta>aranan){
			//düþük dizin =orta dizin +1;
			bas=orta+1;
			son=orta-1;
			
		}
		i++;
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
