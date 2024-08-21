#include<stdio.h>
int main(){
	int N,i,j;
	printf("N degeri giriniz:");
	scanf("%d",&N);
	for(i=0;i<N;i++){
		for(j=0;j<N;j++){
			if(i==0||j==0||j==N-1||i==N-1)
			printf("* ");
			else
			printf("  ");
		}
		printf("\n");
	}
}
