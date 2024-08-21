//İkilik tabanda verilen bir sayıyı onluk tabana çeviren algoritmayı yazınız.
//Onluk tabanda verilen bir sayıyı ikilik tabana çeviren algoritmayı yazınız.
#include<stdio.h>
int main(){
	int sayi,b,t=1,i=1,k=0;
	printf("ikilik tabanda  bir sayi giriniz:");
	scanf("%d",&sayi);
	while(sayi>0){
		b=sayi%10;
		t=b*i;
		k+=t;
		sayi=sayi/10;
		i*=2;
		printf("%d\n",t);
	
	}
	printf("onluk tabandaki karsiligi:(%d)10",k);
}
