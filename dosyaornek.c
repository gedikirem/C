#include <stdio.h>
void main()
{ FILE *dd;
int i, no; /* dosya, ekleme modunda a��l�yor */
if ((dd=fopen("C:\\dosya\\rakam.txt","a")) == NULL)
printf("Surucu bulunamadi.\n");
else
{ for(i=1; i<=3; i++)
{ printf("%d. say�y� giriniz:",i);
scanf("%d",&no); 
fprintf(dd,"%d\n", no);
}
fclose(dd);
}
}
