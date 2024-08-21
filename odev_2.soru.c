/* 2.soru=int sayilar[]={1,6,5,2,1,4,2};verilen sayi dizisinde kullanýcý tarafýndan girilen sayýya denk gelen dizi içerisindekisayýlarýn
yerlerine -1 yerleþtirilen ve bu iþlemi tüm dizideki elemanlar -1 olana kadar devam ettiren ve böylece dizide kac farklý sayý oldugunu
bulan program kodunu yazýnýz(her yerleþtirme sonrassý  dizinin son hali yazdýrýlacaktýr.Dizi yazdýrma iþlemi için fonksiyon kullanýlacak
-týr.)
ör:2 giridi Dizi:{1,6,5,-1,1,4,-1}
4 giridi Dizi:{1,6,5,-1,1,-1,-1}
...
Sonuc=5 farklýsayý bulunmaktad*/
#include<stdio.h>
int kacfarklisayi(int dizi[]){
	int a,s,i,sayac=0;
	dizi[a]=s;
	for(i=0;i<7;i++){
		if(dizi[a]==dizi[i]){
			sayac++;
			return sayac;
		}
	}
}
int yazdirdizi(int dizi_1[]){
	int sayi2,c,k;
	dizi_1[c]=sayi2;
	for(k=0;k<7;k++){
		if(dizi_1[c]==dizi_1[k])
		{
			dizi_1[c]=-1;
			printf(" Dizi=%d",dizi_1[k]);
				}		
	}
}
int main(){
	int sayilar[]={1,6,5,2,1,4,2};
	int sayi,i=0;
	printf("%d",sayilar[i]);
	while(i<5){
	i++;
	printf("lutfen sayi giriniz:");
	scanf("%d",&sayi);
}
    yazdirdizi(sayilar);
    kacfarklisayi(sayilar);
    printf("%d farkli sayi var",kacfarklisayi(sayilar));
}
