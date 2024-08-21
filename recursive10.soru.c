#include<stdio.h>
int eb,ek,x=0;
int toplam(int dizi[10]){
	if(x==0){
	eb=dizi[0];
	ek=dizi[0];
	}
	if(dizi[x]>eb){
	eb=dizi[x];
}
	else if(dizi[x]<ek)
	ek=dizi[x];
	if(x!=9){
		x++;
		toplam(dizi);
	}
	else
	printf("toplam=%d",eb+ek);
}
int main(){
	int dizi[10]={3,4,5,89,1,0,34,5,6,87};
	toplam(dizi);
	
}
