//3.soru fonksiyonlar
//1-N arasý asal sayýlarý listeleyen programý Asal fonksiyonu kullanarak yazýnýz.
#include<stdio.h>
int asalmi(int x){
int sayi;
int i;
int bolenSayi;
	for(sayi=2;sayi<=x;sayi++){ //2'den N'e kadar tüm sayýlara bak
		//sýradaki sayi asal mý diye kontrol et:
		bolenSayi=0;
		for(i=2;i<sayi;i++){				
			if(sayi%i==0){
				bolenSayi++;		
			}		
		}
		if(bolenSayi==0)
			printf("%d\n",sayi);
	}

}

int main(){
	int n;
	printf("N sayisi giriniz:");
	scanf("%d",&n);
	asalmi(n);
}
