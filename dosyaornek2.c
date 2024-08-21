#include<stdio.h>
#include <conio.h>
void main()
{ 
FILE *dd;
char ad[20], devam;
int no;
dd=fopen("C:adlar.txt","w");
if (dd==NULL)
printf("Surucu bulunamadi.\n");
else
{
while(1)
{ printf("Adi :");
scanf("%s", ad);
printf("Numarasi :");
scanf("%d", &no);
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
//#include <stdio.h>
//void main()
//{ FILE *dd;
//char ad[20];
//int no;
//dd=fopen("C:adlar.txt","r");
//if (dd == NULL)
//printf("Surucu veya dosya bulunamadi.\n");
//else
//{ printf("Adi\tNumarasi\n");
//printf("================\n");
//while(fscanf(dd,"%s%d", ad, &no) !=EOF)
//printf("%s\t%5d\n", ad, no);
//fclose(dd);
//}
//}


