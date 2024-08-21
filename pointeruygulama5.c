//Girilen bir kelimenin uzunluðunu pointer kullanarak bulunuz.
#include<stdio.h>
int main(){
	char *p=(int*)malloc(sizeof(char)*20);
	int i=0;
	printf("Kelime giriniz:\n");
	scanf("%s",p);
	while(*(p+i)!='\0'){
		printf("%c\n",*(p+i));
		i++;
	}
	printf("Kelime uzunlugu:%d",i);
}
