//Kullanýcýdan alýnan N deðerine göre NxN bir kare matris oluþturup, 
//matris içerisini 0-100 arasý rastgele sayýlarla doldurunuz. 
//Oluþturulan matrisin iki köþegeninde bulunan sayýlarýn yerlerini ters çeviren program kodunu yazýnýz. 
//(Matrisin ilk durumu ve son durumu matrisYazdir fonksiyonu ile ekranda yazdýrýlacaktýr. 
//Ters çevirme ve Yazdýrma iþlemi için 2 ayrý fonksiyon kullanýlacaktýr.)
//void tersCevir(int satir,int sutun,int matris[satir][sutun])
//void matrisYazdir(int satir,int sutun,int matris[satir][sutun])
//int matris[1][1]
#include<stdio.h>
void terscevir(int N,int M,int matris[N][N]){
	int i,j,a,b,c=0,d=N-1;	
	for(i=0;i<N;i++){
		for(j=0;j<N;j++){
				if(i==j)
			a=j;
			
			else if(i==N-1)
			b=j;
	}
	c=matris[i][b];
	matris[i][b]=matris[i][a];
	matris[i][a]=matris[i][b];
	d--;
	
	}
		yazdirma(N,N,matris);
}
void yazdirma(int N,int M,int matris[N][N]){
	int i,j,d=N-1;
	printf("Son durum:\n");
 	for(i=0;i<N;i++){
		for(j=0;j<N;j++){
			if(i==j||i==N-1)
		printf("%d ",matris[i][j]);
		else
		printf(" ");
	}
	d--;
	printf("\n");}
	
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
	terscevir(N,N,matris);
	
}
