//4.soru fonksiyonlar
// Parametre olarak gönderilen bir kelimenin uzunluğunu döndüren fonksiyon.
#include<stdio.h>
int uzunlukdon(char kelime[]){
	int i=0;
	printf("lutfen uzunlugunu istediginiz kelimeyi giriniz:");
	gets(kelime);
	while(kelime[i]!='\0'){
		i++;
	}
	if(i>0){
		printf("%d",i);
	}
	
	
	
	
}
int main(){
	char kelime1[20];
	uzunlukdon(kelime1);
	
	
	
	
	
	
}
