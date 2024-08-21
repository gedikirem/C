#include<stdio.h>
int main(){
	int dizi[1000];//sabit eleman sayýsý
	int elemanSayisi=10;
    int *p=(int*)malloc(sizeof(int)*elemanSayisi);
	//realloc()
	int i;
	for(i=0;i<5;i++){
		p[i]=i*i;
		printf("%p\n",p);
		p++;
	}

	
	
	//char kelime[]="test";
	//kelime="program";//HATALI
		char *k="programlama";
	    k="giris";
		printf("%s %s",k,k);//buraya ne yazdýrmam gerek?
		
}
	
