/*
4. Kullanýcýnýn girdiði 5 tane ismi “string.dat” binary dosyasýna satýr satýr yazdýrýnýz.
5.“string.dat” dosyasýndaki her bir satýrdaki kelime uzunluðunu satýr sonuna yazdýrýnýz.
Örneðin;
Ali 3
Ahmet 5
*/
#include <stdio.h>
void main()
{ FILE *dd;
int i,j=0;
char ad[20];
if ((dd=fopen("C:string.dat","wb")) == NULL)
/* dosya, yazma modunda açýlýyor */
printf("Sürücü bulunamadý\n");
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
