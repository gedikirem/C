//6. Girilen bir kelimedeki sesli ve sessiz harf say�lar�n� pointer kullanarak bulunuz
#include<stdio.h>
int main(){
	char dizi[30];
	char *p;
	int a=0,b=0,i;
	printf("Kelime giriniz:");
	gets(dizi);
	p=&dizi[0];
	for(i=0;p[i]!='\0';i++){
		if(p[i]=='a'||p[i]=='e'||p[i]=='�'||p[i]=='i'||p[i]=='o'||p[i]=='�'||p[i]=='u'||p[i]=='�'){
			a++;
		}
		else
		b++;
	}
	printf("Sesli harf sayisi:%d\n",a);
	printf("Sessiz harf sayisi:%d\n",b);
}
