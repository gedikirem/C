//02220224038
//ÝREM GEDÝK
#include<stdio.h>
int sondankacinci(char kelime[],char harf){
int i=0,j=0;

	while(kelime[50]!='\0'){
		i++; 
	}
	
for(j=0;j<i;j++){
	printf("laleli bir");
if(kelime[j]==harf){
 return j;
}
	
}}
int main(){
	char kelime[50];
	char harf;
	printf("lutfen kelime giriniz:");
	scanf("%s",&kelime);
	printf("lutfen aranacak harfi giriniz:");
	scanf("%c",&harf);

	sondankacinci(kelime,harf);

}
