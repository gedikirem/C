//fonksiyonlar 1.soru çözümü
#include<stdio.h>
int toplam(int x,int y){
	int toplam1=0;
	int i;
	for(i=x;i<=y;i++){
		toplam1=toplam1+i;
		
	}
		return toplam1;
	
}
int main(){
int sayi1,sayi2;
printf("lutfen iki sayi giriniz:");
scanf("%d %d",&sayi1,&sayi2);

printf("%d den %d e kadar olan sayilarin toplami=%d",sayi1,sayi2,toplam(sayi1,sayi2));



}
