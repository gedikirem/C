//Girilen 5 adet sayýyý bir diziye aktardýktan sonra bu diziyi pointer kullanarak
//tersten yazdýrýnýz.
//tekrar bak
#include<stdio.h>
int main(){
	int dizi[5],sayi;
	int i,*p;
	for(i=0;i<5;i++){
		scanf("%d",&sayi);
		dizi[i+1]=sayi;
	}
	p=dizi;
	printf("dizinin tersi:\n");
	for(i=5;i>0;i--){
		printf("%d\n",p[i]);
	}
}
