//�kilik tabanda verilen bir say�y� onluk tabana �eviren algoritmay� yaz�n�z.
//Onluk tabanda verilen bir say�y� ikilik tabana �eviren algoritmay� yaz�n�z.
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
