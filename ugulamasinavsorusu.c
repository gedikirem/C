//sayi dizisi alýyorsun bir tane de sayý alýp ondan kaç adet olduðunu buluyorsun
#include<stdio.h>
int kacadetvar(int dizi[],int sayi,int N){
	int i;
	int t=0;
	for(i=0;i<N;i++){
		if(dizi[i]==sayi){
			t++;
		}
	}
	if(t>0)
	printf("%d adet sayi vardir",t);
	if(t==0)
	printf("Aradiginiz sayi bulunamadi!");
}
int main(){
	int N,i;
	printf("Lutfen N sayisini giriniz:");
	scanf("%d",&N);
	int dizi[N];
	for(i=0;i<N;i++){
		printf("%d.sayi:",i+1);
		scanf("%d",&dizi[i]);
	}
	int sayi;
	printf("lutfen aradiginiz sayiyi giriniz:");
	scanf("%d",&sayi);
	kacadetvar(dizi,sayi,N);
	
}
