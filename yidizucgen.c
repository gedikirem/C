#include<stdio.h>
int main(){
	int N,i,j;
	printf("N sayisi girin:");
	scanf("%d",&N);
	for(i=0;i<=N;i++){
		for(j=0;j<i;j++){
			printf("* ");
		}
		printf("\n");
	}
}
