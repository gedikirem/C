/*
2-Random fonksiyonu ile 50 adet rastgele sayý üretip her bir satýrda 5 adet sayý olacak þekilde toplam 10 satýrlýk
“randomNumber.txt” isimli bir dosya oluþturunuz.
3- “randomNumber.txt” isimli dosya içindeki her bir satýrdaki en büyük sayýyý bulup ayný satýrýn sonuna yazdýrýnýz.

*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main()
{ 
srand(time(0));
FILE *dd;
int i,j;
int matris[10][5];
dd=fopen("C:randomNumber.txt","w"); 
/* dosya, yazma modunda açýlýyor */
if (dd == NULL)
printf("Surucu bulunamadi.\n");
else
{ for(i=0; i<10; i++){
	for(j=0;j<5;j++){
    matris[i][j]=rand()%100;
    fprintf(dd,"%d ",matris[i][j]);	
	}
    fprintf(dd,"\n",matris[i][j]);
}
}
int enb;
    enb=matris[0][0];
	for(i=0;i<10;i++){
		for(j=0;j<5;j++){
				if(matris[i][j]>enb){
					enb=matris[i][j];
				}	
		}
	}
printf("en buyuk sayi:%d",enb);	
fclose(dd);
}



