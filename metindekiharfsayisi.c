//girilen metinde bir harften ne kadar tekrarlandýðýný bulma
#include<stdio.h>
int main(){
	int i=0,a=0;
	char metin[100];
	char harf;
	printf("Metin giriniz:\n");
	gets(metin);
	printf("Harf giriniz:\n");
	scanf("%c",&harf);
	while(metin[i]!='\0'){
		i++;
		if(metin[i]==harf){
		a++;	
		}
	}
	if(a>0)
	printf("%d adet aranan harf vardir",a);
}
