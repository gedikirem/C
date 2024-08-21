#include<stdio.h>
int main(){
	int sayac=1,i,j,N;
	printf("N sayisi giriniz:");
	scanf("%d",&N);
	for(i=1;i<N;i++){
		for(j=1;j<i;j++){
			printf("%d ",sayac);
			sayac++;
		}
		printf("\n");
	}
}
