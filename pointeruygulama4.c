//Girilen 5 adet say�y� bir diziye aktard�ktan sonra bu diziyi pointer kullanarak
//tersten yazd�r�n�z.
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
