#include<stdio.h>
int main(){
	char *p=(int*)malloc(sizeof(char)*20);
	printf("bir kelime gir:");
	scanf("%s",p);
	int i=0;
	while(*(p+i)!='\0'){
		printf("%p\n",(p+i));
		i++;
	}
	printf("kelime uzunlugu:%d",i);
}
