/*
"adlar.txt" dosyasýna yeni bilgiler ekleyen programý inceleyelim. Bu
program "a" (append-ekleme) modunda açýlýr ve kullanýcý "Devam etmek 
istiyor musunuz" sorusuna karþýlýk klavyeden 'h' dýþýnda herhangi bir harf 
girdiði sürece klavyeden girilen isim ve numaralar "adlar.txt" dosyasýndaki 
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


