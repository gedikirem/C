//Girilen say�n�n Jumbled (kom�u rakamlar aras�ndaki fark maksimum 1) olup olmad���n�
//bulunuz.(12, 45, 656, 3432,... )
#include<stdio.h>
int main(){
	int sayi,bas1,bas2,t=0;
	printf("Sayi giriniz:");
	scanf("%d",&sayi);
	while(sayi>0){
		bas1=sayi%10;
		printf("%d\n",bas1);
		bas2=sayi/10;
		sayi=sayi/10;
		if(bas1-bas2==1||bas2-bas1==1)
		t++;
	}
	if(t>0)
	printf("Jumbled sayi");
	else
	printf("Jumbled sayi degil");
}
