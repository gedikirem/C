//fonksiyonlar 2.soru
//Kendisine parametre olarak verilen bir tam sayýnýn Asal olup olmadýðýný kontrol
//edip Asal ise 1, deðilse 0 deðerini döndüren fonksiyon
#include<stdio.h>
int asalmiacep(int x){
	int i,t;
	for(i=2;i<x;i++){
		if(x%i==0){
			t++;

		}
	}
	if(t==0)
		return 1;
	else if(t!=0)
		return 0;
		
	}
	

int main(){
	int sayi;
	printf("bir sayi giriniz:");
	scanf("%d",&sayi);
	if(asalmiacep(sayi)==0||sayi<2){
		printf("%d asal sayi degildir",sayi);
	}
	else if(asalmiacep(sayi)==1||sayi==2){
		printf("%d asal sayidir",sayi);
	}
}
	
