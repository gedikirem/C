/*
2-Random fonksiyonu ile 50 adet rastgele say� �retip her bir sat�rda 5 adet say� olacak �ekilde toplam 10 sat�rl�k
�randomNumber.txt� isimli bir dosya olu�turunuz.
3- �randomNumber.txt� isimli dosya i�indeki her bir sat�rdaki en b�y�k say�y� bulup ayn� sat�r�n sonuna yazd�r�n�z.

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
/* dosya, yazma modunda a��l�yor */
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



