//fibonacci
#include<stdio.h>
int main(){
	int x;
	printf("N degeri girin:\n");
	scanf("%d",&x);
	int dizi[x],i;
	dizi[0]=0,dizi[1]=1;
	for(i=0;i<x;i++){
		dizi[i+2]=dizi[i]+dizi[i+1];
	}
		for(i=0;i<x;i++){
		printf("%d.deger=%d\n",i+1,dizi[i]);
}
}
