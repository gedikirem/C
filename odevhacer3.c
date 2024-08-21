#include<stdio.h>
#include<time.h>
#include<stdlib.h>
void terscevir(int satir,int sutun,int matris[satir][sutun]){
	int i,j,j1,j2,c=sutun-1,b=0;
	for(i=0;i<satir;i++){
		for(j=0;j<sutun;j++){
			if(i==j)
			j1=j;
			if(i==c)
			j2=j;
		}
		b=matris[i][j2];
		matris[i][j2]=matris[i][j1];
		matris[i][j1]=b;
		c--;
	}
	matrisyazdir(satir,sutun,matris);
	
}
void matrisyazdir(int satir,int sutun,int matris[satir][sutun]){
		int i,j,a;
		a=satir-1;
		for(i=0;i<satir;i++){
		for(j=0;j<sutun;j++){
		if(i==j||j==a)
			printf("%d ",matris[i][j]);
		else
		printf(" ");
	}
	a--;
	printf("\n");
}
	
}
int main(){
		srand(time(0));
	int N;
	printf("N sayisini giriniz:");
	scanf("%d",&N);
	int matris[N][N];

	int i,j;
	printf("ilk durum:\n");
	for(i=0;i<N;i++){
		for(j=0;j<N;j++){
		matris[i][j]=rand()%100;
		printf("%d ",matris[i][j]);
	}
	printf("\n");
}
matrisyazdir(N,N,matris);
printf("\n");
terscevir(N,N,matris);
}
