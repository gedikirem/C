#include<stdio.h>

void yazdir(int dizi[],int elemansayisi){
	int i;
	for(i=0;i<elemansayisi;i++){
		printf("%d\n",dizi[i]);
}
	
}

int main(){
	int dizi[6]={1,2,3,4,6,78};
	yazdir(dizi,6);
	
}
