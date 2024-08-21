//baska diziye aktararak yazdýrma
#include<stdio.h>
int main(){
	int N;
	printf("N degeri giriniz:\n");
	scanf("%d",&N);
	int i,j=0,dizi[N],dizi1[N];
	for(i=0;i<N;i++){
		scanf("%d",&dizi[i]);
	}
	for(i=N-1;i>=0;i--){
		dizi1[j]=dizi[i];
		j++;
		
	}
	printf("Ters dizi:\n");
	for(i=0;i<N;i++){
		printf("%d\n",dizi1[i]);
	}
	
	
	
	
}
