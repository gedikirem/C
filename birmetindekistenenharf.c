#include <stdio.h>
#include <string.h>

int main()
{
	char a[50], b[50];

	printf("Birinci Cumleyi Yazinizn");
	gets(a);

	printf("Ikinci Cumleyi Yazinizn");
	gets(b);

	if( strcmp(a,b) == 0 )
		printf("Cumleler Esittirn");
	else
		printf("Cumleler Esit Degildirn");

	return 0;
}

