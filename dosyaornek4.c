/*
örnekte 20
karakter uzunluðuna kadar olan ve boþlukta içeren 5 adet isim okutulmakta ve 
“isimler.txt” dosyasýna yazdýrýlmaktadýr.
*/
#include <stdio.h>
void main()
{ FILE *dd;
int i;
char ad[20];
if ((dd=fopen("C:isimler.txt","w")) == NULL)
/* dosya, yazma modunda açýlýyor */
printf("Sürücü bulunamadý\n");
else
{ for(i=1; i<=5; i++)
{ printf("%d. adi giriniz:",i);
fgets(ad, 20, stdin);
fputs(ad, dd);
}
fclose(dd);
}
}
//#include <stdio.h>
//void main()
//{ FILE *dd;
//char ad[20];
//dd=fopen("d:\\isimler.txt","r");
//if (dd == NULL)
//printf("Sürücü veya dosya bulunamadý\n");
///* dosya, okuma modunda açýlýyor */
//else
//{ while (!feof(dd))
//{ fgets(ad, 20, dd);
//printf("%s", ad);
//}
//fclose(dd);
//}
//}


