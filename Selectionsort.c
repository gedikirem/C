//Selection Sort
#include<stdio.h>
void swap(int *a,int *b){
	int gecici;
	gecici=*a;
	*a=*b;
	*b=gecici;
}
void SelectionSort(int dizi[],int x){
	int i,j,min;
	for(i=0;i<x-1;i++){
		min=i;
		for(j=i+1;j<x;j++){
			if(dizi[min]>dizi[j]){
				min=j;
			}
		}
		swap(&dizi[min],&dizi[i]);
	}
}
void Yazdir(int dizi[],int x){
	int i;
	for(i=0;i<x;i++){
		printf("%d ",dizi[i]);
	}
}
int main(){
	int x;
	printf("Dizinin eleman sayisini girin:\n");
	scanf("%d",&x);
	int dizi[x],i=0;
	while(i<x){
		printf("Sayi giriniz:");
		scanf("%d",&dizi[i]);
		i++;
	}
	SelectionSort(dizi,x);
	Yazdir(dizi,x);	
}
