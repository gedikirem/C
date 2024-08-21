#include <stdio.h>
void main(){
//{ FILE *dd;
//int i, no;
//dd=fopen("C:Yeni Metin Belgesi.txt","w"); 
///* dosya, yazma modunda açýlýyor */
//if (dd == NULL)
//printf("Surucu bulunamadi.\n");
//else
//{ for(i=1; i<=5; i++)
//{ printf("%d. sayiyi giriniz:",i);
//scanf("%d",&no);
//fprintf(dd,"%d\n", no);
//}
//fclose(dd);
//}

FILE *dd;
int no; /* dosya, okuma modunda açýlýyor */
if ((dd=fopen("C:Yeni Metin Belgesi.txt","r")) == NULL)
printf("Surucu veya dosya bulunamadi.\n");
else
{ while (fscanf(dd,"%d",&no)!=EOF)
printf ("%d\n",no) ;
fclose(dd);
}

}

