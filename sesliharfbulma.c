//Verilen bir metin i�erisindeki sesli harfleri sayan
#include<stdio.h>
int main(){
	char metin[50];
	int i=0,a=0;
	printf("Metin Giriniz:\n");
	gets(metin);
	while(metin[i]!='\0'){
		if(metin[i]=='a'||metin[i]=='e'||metin[i]=='�'||metin[i]=='i'||metin[i]=='o'||metin[i]=='�'||metin[i]=='u'||metin[i]=='�'){
			a++;
		}
		i++;
	}
	printf("%d adet sesli harf vardir",a);
	
	
	
}
