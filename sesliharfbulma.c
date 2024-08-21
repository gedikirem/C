//Verilen bir metin içerisindeki sesli harfleri sayan
#include<stdio.h>
int main(){
	char metin[50];
	int i=0,a=0;
	printf("Metin Giriniz:\n");
	gets(metin);
	while(metin[i]!='\0'){
		if(metin[i]=='a'||metin[i]=='e'||metin[i]=='ý'||metin[i]=='i'||metin[i]=='o'||metin[i]=='ö'||metin[i]=='u'||metin[i]=='ü'){
			a++;
		}
		i++;
	}
	printf("%d adet sesli harf vardir",a);
	
	
	
}
