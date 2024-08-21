#include<stdio.h>
int fonksiyon(int n,int i){
	if(i==n+1)
	return 0;
	printf("%d\n",i);
	fonksiyon(n,i+1);
}
int main(){
	int n;
	printf("N sayisi giriniz:");
	scanf("%d",&n);
	fonksiyon(n,1);
}
