//Bir þirkette çalýþan personeller için adsoyad,maaþ ve doðum tarihi(yýl,ay,gün) þeklinde bilgiler tutulmaktadýr.
// 5 personel için bu bilgiler alýndýktan sonra yaþý 25-40 arasý olanlarýn adý soyadý,maaþý ve yaþýný ekrana listeleyiniz. 
#include<stdio.h>
#include<stdlib.h>
struct dogumTarihi{
	int gun;
	int ay;
	int yil;	
};
struct personel{
	char ad[15];
	char soyad[15];
	int maas;
	struct dogumTarihi dogum;
};     									
void yazdir(struct personel dizi[]){
	int i,sayi;
	printf("\n********--------------------------********\n\n");
	for(i=0;i<5;i++){
		int sayi;
		sayi=2022-(dizi[i].dogum.yil);
		if(sayi>=25 && sayi<=40){
			printf("Adi:%s\nSoyadi:%s\nMaasi:%d\nYasi:%d\n",dizi[i].ad,dizi[i].soyad,dizi[i].maas,sayi);
		}
		printf("\n");
	}
}
int main(){
	struct personel dizi[5];	
	int i;
	for(i=0;i<5;i++){
		printf("Adinizi giriniz:");
		scanf("%s",&dizi[i].ad);
		printf("Soyadinizi giriniz:");
		scanf("%s",&dizi[i].soyad);
		printf("Maasinizi giriniz:");
		scanf("%d",&dizi[i].maas);
		printf("Dogum tarihinizi giriniz:");
		scanf("%d %d %d",&dizi[i].dogum.gun,&dizi[i].dogum.ay,&dizi[i].dogum.yil);
		printf("\n");
	}
	yazdir(dizi);
	return 0;
}
