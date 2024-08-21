#include <stdio.h>
void main()
{ FILE *dd;
int i, no; /* dosya, ekleme modunda açýlýyor */
if ((dd=fopen("C:\\dosya\\rakam.txt","a")) == NULL)
printf("Surucu bulunamadi.\n");
else
{ for(i=1; i<=3; i++)
{ printf("%d. sayýyý giriniz:",i);
scanf("%d",&no); 
fprintf(dd,"%d\n", no);
}
fclose(dd);
}
}
