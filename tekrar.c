#include<stdio.h>
int yazdir(char ad[]){
	int i=0;
	while(ad[i]!='\0'){
		printf("%c\n",ad[i]);
		i++;
	}
}
int main(){
	char ad[10];
	printf("isim giriniz:");
	gets(ad);
	yazdir(ad);
}
