//girilen her kelimeyi matrisin bir satýrýna atama
#include<stdio.h>
int main(){
	int i=0,j=0,sayi=0;
	char dizi[40];
	char A[20][20]={};
	printf("Kelime giriniz:\n");
	gets(dizi);
	while(dizi[sayi]!='\0'){
		if(dizi[sayi]==' '){
			i++;
			j=0;
		}
		else{
			A[i][j]=dizi[sayi];
			j++;
		}
		sayi++;
	}
	for(i=0;i<20;i++){
		for(j=0;j<20;j++){
			printf("%c ",A[i][j]);
}
printf("\n");
}	
}
