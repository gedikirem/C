/*
4. Kullan�c�n�n girdi�i 5 tane ismi �string.dat� binary dosyas�na sat�r sat�r yazd�r�n�z.
5.�string.dat� dosyas�ndaki her bir sat�rdaki kelime uzunlu�unu sat�r sonuna yazd�r�n�z.
�rne�in;
Ali 3
Ahmet 5
*/
#include <stdio.h>
void main()
{ FILE *dd;
int i,j=0;
char ad[20];
if ((dd=fopen("C:string.dat","wb")) == NULL)
/* dosya, yazma modunda a��l�yor */
printf("S�r�c� bulunamad�\n");
else
{ for(i=1; i<=5; i++)
{ printf("%d. adi giriniz:",i);
fgets(ad, 20, stdin);
fputs(ad, dd);
while(ad[j]!='\0'){
	j++;
}
fprintf(dd,"\nkelime uzunlugu:%d",j-1);
j=0;
}
fclose(dd);
}
}
