/* 2.soru=int sayilar[]={1,6,5,2,1,4,2};verilen sayi dizisinde kullanýcý 
tarafýndan girilen sayýya denk gelen dizi içerisindekisayýlarýn
yerlerine -1 yerleþtirilen ve bu iþlemi tüm dizideki elemanlar -1 olana kadar devam ettiren
 ve böylece dizide kac farklý sayý oldugunu
bulan program kodunu yazýnýz(her yerleþtirme sonrassý  dizinin son hali
 yazdýrýlacaktýr.Dizi yazdýrma iþlemi için fonksiyon kullanýlacak
-týr.)
ör:2 giridi Dizi:{1,6,5,-1,1,4,-1}
4 giridi Dizi:{1,6,5,-1,1,-1,-1}
...
Sonuc=5 farklýsayý bulunmaktad*/

int degistir(int dizi[],int sayi){
int i;
for(i=0;i<7;i++){
	printf("%d\n",dizi[i]);
}
	
		
	
}
int main(){
int sayilar[]={1,6,5,2,1,4,2};
int sayi;

printf("lutfen bir sayi giriniz");
scanf("%d",&sayi);
for(i=0;i<7;i++){
degistir(sayiar,sayi);	
}

	
	
}
