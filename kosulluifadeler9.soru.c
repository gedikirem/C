
#include<stdio.h>
int main(){
	int dizi[4],t=0,i,o=0;
	for(i=0;i<4;i++){
		printf("Lutfen %d.sayi giriniz:",i+1);
		scanf("%d",&dizi[i]);
		t+=dizi[i];
	}
	o=t/4;
		printf("Toplam:%d\n",t);
		printf("Ortalama:%d\n",o);
		i=0;
		printf("Ortalamadan kucuk olanlar:\n");        
		for(i=0;i<4;i++){
		if(o>=dizi[i])	printf("%d\n",dizi[i]);
}
		 printf("Ortalamadan buyuk veya esit olanlar:\n");
 		for(i=0;i<4;i++){
			if(dizi[i]>o)	printf("%d\n",dizi[i]);}										
	
		}

