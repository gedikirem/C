#include <stdio.h> /* Muhasebe program� */
#include <conio.h>
#include <string.h>
#include <stdlib.h>
char menu();
void ekle();
void ara();
void main()
{ char secenek;
do 
{ secenek = menu() ;
switch(secenek) 
{ case 'e': 
ekle(); break;
case 'a': 
ara(); break;
}
} 
while (secenek != 'c');
}
/* Men�y� g�r�nt�leyen fonksiyon */
char menu() 
{ char ch;
do
{ printf("(E)kle, (A)ra, veya (C)ikis :");
ch = tolower(getche());
printf("\n");
} 
while(ch != 'e' && ch != 'a' && ch !='c');
return ch;
}
/* isim ve hesap �zetinin girildi�i fonksiyon */
void ekle()
{ FILE *dd;
char isim[80];
float hesap;
dd = fopen("C:hesap.txt","a");
if (dd == NULL)
printf("Surucu bulunamadi.\n");
else
{ printf("Ad� giriniz :");
scanf("%s",isim);
printf("Hesap miktar�n� giriniz (YTL):");
scanf("%f",&hesap);
fprintf(dd,"%s\t%8.2f\n",isim, hesap);
fclose(dd);
}
}
/* Girilen isme ait hesap �zetini veren fonksiyon */
void ara()
{ FILE *dd;
char isim[80], isim2[80];
float hesap;
dd = fopen("C:hesap.txt","r");
if (dd == NULL)
printf("Dosya bulunamadi.\n");
else
{ printf("ismi giriniz : ");
gets(isim2);
while(fscanf(dd,"%s",isim) != EOF)
{ fscanf (dd,"%f", &hesap);
if(!strcmp(isim, isim2)) 
{ printf("%s:\t%8.2f YTL.\n",isim, hesap);
break;
}
}
fclose(dd);
}
}

