/*
�rnekte 20
karakter uzunlu�una kadar olan ve bo�lukta i�eren 5 adet isim okutulmakta ve 
�isimler.txt� dosyas�na yazd�r�lmaktad�r.
*/
#include <stdio.h>
void main()
{ FILE *dd;
int i;
char ad[20];
if ((dd=fopen("C:isimler.txt","w")) == NULL)
/* dosya, yazma modunda a��l�yor */
printf("S�r�c� bulunamad�\n");
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
//printf("S�r�c� veya dosya bulunamad�\n");
///* dosya, okuma modunda a��l�yor */
//else
//{ while (!feof(dd))
//{ fgets(ad, 20, dd);
//printf("%s", ad);
//}
//fclose(dd);
//}
//}


