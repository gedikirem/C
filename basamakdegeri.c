//Girilen bir say�n�n basamak de�erlerini yazd�r�n�z
#include<stdio.h>
int main(){
	int sayi,i,basamak=0,t=0;
	printf("Sayi giriniz:");
	scanf("%d",&sayi);
	int a=sayi,b;
	while(sayi>0){
	b=sayi%10;
//	printf("%d\n",basamak);
	sayi=sayi/10;
	/*if(a%basamak==0){
		t++;
	}
	*/
	 if(a%b==0){
        t++;
        }
}
printf("%d",t);

}
