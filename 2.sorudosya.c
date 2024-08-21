#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SATIR 10
#define SUTUN 5
#define TOPLAM_SAYILAR SATIR * SUTUN


int main(){
	FILE *file;
	int i,j;
	int sayilar[TOPLAM_SAYILAR];
	// 0 ile 00 arasýnda rastgele sayý üretir
	srand(time(NULL));
	for(i=0;i<TOPLAM_SAYILAR;i++){
	 sayilar[i]=rand()%100;
	}
	file=fopen("C:randomNumber1.text","w+");
	if(file!=NULL){
		for(i=0;i<SATIR;i++){
			for(j=0;j<SUTUN;j++){
				fprintf(file,"-%d ",sayilar[i*SUTUN+j]);
			}
			fprintf(file,"\n");
		}
		fclose(file);
		printf("Dosya Olusturuldu.randomNumber1.txt\n");
	}
	else{
		printf("Dosya olusturalamadi hatasi!!!");
		return 1;
	}
	return 0;
}
