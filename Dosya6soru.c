/*
 5 ��renci i�in Vize ve Final notlar�n� �Notlar.txt� dosyas�na yazd�r�n�z.
Notlar.txt:
40 30
65 80
90 70
20 25
55 65
7.soru:
OrtalamaHesapla fonksiyonu ile �Notlar.txt� dosyas�ndaki her ��rencinin ortalama notunu ayn� sat�r�n sonuna(3.s�tun
�eklinde) yazd�r�n�z.
*/
#include<stdio.h>
void main()
{
	FILE *dd;
	int i,j;
	int Matris[5][2];
	dd=fopen("C:Notlar.txt","w");
	if(dd == NULL)
    printf("Surucu bulunamadi.\n");
    else
    {
    	for(i=0;i<5;i++){
    		for(j=0;j<2;j++){
    			printf("sayi giriniz:");
    			scanf("%d",&Matris[i][j]);	
			}
		}
			for(i=0;i<5;i++){
    		for(j=0;j<2;j++){
    			fprintf(dd,"%d ",Matris[i][j]);
			}
			fprintf(dd,"\n",Matris[i][j]);
		}
	}
	fclose(dd);
	
	
	
	
}
