#include<stdio.h>
int uzunlukdon(char kelime1[]){
	int i=0;
	while(kelime1[i]!='\0'){
		i++;
	}
	return i;
}
int main(){
	int kelime[30];
	printf("bir kelime giriniz:");
	gets(kelime);
	printf("kelime uzunlugu:%d",uzunlukdon(kelime));
	
}
