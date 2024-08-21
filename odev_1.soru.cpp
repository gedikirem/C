//1.soru parametre olarak bir char dizisi ve bir adet char elemaný alan ve 
//bu dizi içinde aranan elemanýn sondan kacýncý oldugunu 
//bulan(yoksa -1 döndüren)fonksiyonu yazýnýz.main()fonksiyonunda ise k
//ullanýcýdan bir kelime ve karakter alýnarak bu fonksiyona gönderilecekri
//ör:"Programlamaya Giris"cümlesinde aranan='r'ise Sonuc=3 dönecektir(sondan 3.sýrada r harfi bulundu.
//ilk buldugu sýrayý döndürmesi yeterlidir)
#include<stdio.h>


int sondankacinci(char dizi[],int a){
	int i,j=0;
	for(i=17;i>dizi[0];i--){
		if(dizi[i])!='\0'){
			j++;
		}
		else{
		return j;
		}
	}
	
	
}


int main(){
	char cumle[17]
	int i;
	char harf;
	gets(cumle);
	scanf("%c",&harf);
	printf("%d",sondankacinci(j));





