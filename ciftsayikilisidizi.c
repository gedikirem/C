//çift sayý ikilisi
#include<stdio.h>
int main(){
	int N;
	printf("Dizi eleman sayisini giriniz:\n");
	scanf("%d",&N);
	int dizi[N],i;
	for(i=0;i<N;i++){
		printf("%d.sayi:",i+1);
		scanf("%d",&dizi[i]);
	}
	printf("Cift sayi ikilisi:\n");
	for(i=0;i<N;i++){
		if(dizi[i]%2==0 && dizi[i+1]%2==0){
			printf("%d-%d\n",dizi[i],dizi[i+1]);
		}
	}
}
