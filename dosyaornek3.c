/*
"adlar.txt" dosyas�na yeni bilgiler ekleyen program� inceleyelim. Bu
program "a" (append-ekleme) modunda a��l�r ve kullan�c� "Devam etmek 
istiyor musunuz" sorusuna kar��l�k klavyeden 'h' d���nda herhangi bir harf 
girdi�i s�rece klavyeden girilen isim ve numaralar "adlar.txt" dosyas�ndaki 
mevcut bilgilerin sonuna eklenir.

*/
#include <stdio.h>
#include <conio.h>
void main()
{ FILE *dd;
char ad[20], devam;
int no;
dd=fopen("C:adlar.txt","a");
if (dd == NULL)
printf("Surucu bulunamadi.\n");
else
{
while(1)
{ printf("Adi :"); scanf("%s", ad);
printf("Numarasi :"); scanf("%d", &no);
fprintf(dd,"%s\t%5d\n", ad, no);
printf("\nDevam etmek istiyor musunuz:");
devam = getche();
if(devam == 'h') break;
printf("\n");
}
fclose(dd);
printf("\n");
}
}


