#include<stdio.h>
int carp(int matris[],int size){
	int i=0;
	int carpim=1;
	for(i=0;i<size;i++){
		carpim*=matris[i];
	}
	
	return carpim;
}
int main(){
	int sayilar[5]={2,3,6,7,8};
	printf("%d",carp(sayilar,5));
	
}
