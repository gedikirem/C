//1.soru parametre olarak bir char dizisi ve bir adet char eleman� alan ve 
//bu dizi i�inde aranan eleman�n sondan kac�nc� oldugunu 
//bulan(yoksa -1 d�nd�ren)fonksiyonu yaz�n�z.main()fonksiyonunda ise k
//ullan�c�dan bir kelime ve karakter al�narak bu fonksiyona g�nderilecekri
//�r:"Programlamaya Giris"c�mlesinde aranan='r'ise Sonuc=3 d�necektir(sondan 3.s�rada r harfi bulundu.
//ilk buldugu s�ray� d�nd�rmesi yeterlidir)
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





