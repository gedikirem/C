//Diziler ve Pointer benzerliði
#include<stdio.h>
int main(){
	int dizi[]={1,2,3};
	int i;
	for(i=0;i<3;i++){
		printf("%p\n",&dizi[i]);
	}
	int *p;
	p=&dizi[0];
	p=dizi;//dizinin baþlangýç adresi
	for(i=0;i<3;i++){
		printf("%d\n",*p);
		p++;
	}
	p=dizi;
	for(i=0;i<3;i++){
		printf("%d\n",p[i]);
	}
}
