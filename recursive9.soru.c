#include<stdio.h>
int eb;
int enbuyuk(int dizi[10],int x){
	if(x==9)
	printf("Dizideki en buyuk sayi:%d",eb);
	if(x==0)
	eb=dizi[0];
	if(dizi[x]>eb){
		eb=dizi[x];
		return enbuyuk(dizi,x+1);
	}
	else
	return enbuyuk(dizi,x+1);
}
int main(){
	srand(time(0));
	int a=0,i;
	int dizi[10];
	printf("Dizi elemanlari girin:\n");
	for(i=0;i<10;i++){
		dizi[i]=rand()%100;
		printf("%d\n",dizi[i]);
	}
	enbuyuk(dizi,a);	
}
