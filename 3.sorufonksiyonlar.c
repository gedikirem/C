//3.soru fonksiyonlar
//1-N aras� asal say�lar� listeleyen program� Asal fonksiyonu kullanarak yaz�n�z.
#include<stdio.h>
int asalmi(int x){
int sayi;
int i;
int bolenSayi;
	for(sayi=2;sayi<=x;sayi++){ //2'den N'e kadar t�m say�lara bak
		//s�radaki sayi asal m� diye kontrol et:
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
