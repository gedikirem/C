//4.soru fonksiyonlar
// Parametre olarak g�nderilen bir kelimenin uzunlu�unu d�nd�ren fonksiyon.
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
	char kelime1[50];
	uzunlukdon(kelime1);
}
