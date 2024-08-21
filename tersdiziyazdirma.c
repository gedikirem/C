#include<stdio.h>
int main(){
	int N;
	printf("N sayisi giriniz:");
	scanf("%d",&N);
	int dizi[N];
		int i;
	for(i=0;i<N;i++){
		scanf("%d",&dizi[i]);
	}
	printf("Dizi:\n");
		for(i=0;i<N;i++){
		printf("%d\n",dizi[i]);
	}
	printf("Ters Dizi:\n");
	for(i=N-1;i>=0;i--){
		printf("%d\n",dizi[i]);
	}
}
