// 3*3 =9 a kadar1 den n sayisina kadar matris olusturup yazma
#include<stdio.h>
int main(){
	int a,sayac=1;
	printf("a sayisi girin:\n");
	scanf("%d",&a);
	int matris[a][a],i,j;
	for(i=0;i<a;i++){
		for(j=0;j<a;j++){
		matris[i][j]=sayac;
		sayac++;
		}
	}
	for(i=0;i<a;i++){
		for(j=0;j<a;j++){
		printf("%d ",matris[i][j]);
		}
		printf("\n");
	}
	
}
