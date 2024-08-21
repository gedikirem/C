#include<stdio.h>
int main(){
	int N;
	printf("N sayisi giriniz:");
	scanf("%d",&N);
	int dizi[N];
	int i;
	for(i=0;i<N;i++){
		printf("%d.sayi giriniz:",i+1);
		scanf("%d",&dizi[i]);
	}
	int max=dizi[0],min=dizi[0];
	for(i=0;i<N;i++){
		if(dizi[i]>max){
			max=dizi[i];
		}
		if(dizi[i]<min){
			min=dizi[i];
		}
	}
	printf("En buyuk eleman:%d\n",max);
	printf("En kucuk eleman:%d\n",min);
}
