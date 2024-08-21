//#include <stdio.h>
//void main ()
//{ FILE *fp;
//int sayilar[100];
//int i;
//fp=fopen("C:kýrm.dat","wb");
//for (i=0; i<100; i++) 
//sayilar[i] = i;
//fwrite(sayilar, sizeof(sayilar), 1, fp);
//fclose(fp);
//}
#include <stdio.h>
void main ()
{
 FILE *fp;
int sayilar[100];
int i;
fp=fopen("C:kýrm.dat","rb");
fread(sayilar, sizeof(sayilar), 1, fp);
for (i=0; i<100; i++) 
printf("%2d\n", sayilar[i]);
fclose(fp);
}
