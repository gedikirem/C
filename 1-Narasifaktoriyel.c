// Girilen N deðerine göre 1-N arasýndaki tüm sayýlarýn faktöriyelini bulan programýyazýnýz.(Ekran çýktýsý: 1!=1, 2!=2, 3!=6…)
#include<stdio.h>
int main(){
	int N,i,f=1;
	printf("N degeri giriniz:");
	scanf("%d",&N);
	for(i=1;i<=N;i++){
		f=f*i;
		printf("%d!=%d\n",i,f);
	}
	
}
