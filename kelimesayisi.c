//girilen metindeki kelime sayýsý?
#include<stdio.h>
int main(){
	int i=0,b=0;
	char metin[50];
	printf("Metin giriniz:\n");
	gets(metin);
	while(metin[i]!='\0'){
		i++;
		
		if(metin[i]==' '){
			b++;
		}
	}
	if(b>0)
	printf("Kelime sayisi=%d\n",b+1);
	printf("Bosluk sayisi=%d",b);
}
