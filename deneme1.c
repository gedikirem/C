#include<stdio.h>
int sondanKacinci(char kelimeiki[],char harfiki){
int sayac;int i=0;
int a;int j=0; int k=0;

for(i=0;kelimeiki[i]!='\0';i++){
	k++;
    }
kelimeiki[a]=harfiki;
for(sayac=i;sayac>a-1;sayac--){
	j++;
if(sayac==a-1){
	sayac=j;
	return sayac;
}

else{
return -1;
}
}
}
int main(){
	char kelime[50];
	char harf;
	printf("lutfen kelime giriniz:");
	scanf("%s",&kelime);
	printf("lutfen aranacak harfi giriniz:");
	scanf("%s",&harf);
	sondanKacinci(kelime[50],harf);
	printf("%d",sondanKacinci(kelime[50],harf));
