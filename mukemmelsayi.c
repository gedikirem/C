// Girilen say�n�n M�kemmel Say�(tam b�lenleri toplam� kendisine e�it olan) olup olmad���n� bulunuz.(6, 28, 496, �)
#include<stdio.h>
int main(){
int sayi,i,t=0;
printf("Bir sayi giriniz:")	;
scanf("%d",&sayi);
for(i=1;i<sayi;i++){
	if(sayi%i==0){
		t+=i;
	}	
}
	if(t>0 && t==sayi)
	printf("Mukemmel sayi");
	else
	printf("Mukemmel sayi degil");
	
}

