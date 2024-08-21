
int sondankacinci(char dizi[],char harf){
	int i;
	for(i=0;dizi[i]!='\0';i++){
		if(dizi[i]==harf)
		
		return i+1;
	}
}
int main(){
	char dizi[30],harf;
	printf("Kelime Giriniz:"),
	gets(dizi);
	printf("Harf Giriniz:");
	scanf("%c",&harf);
printf("%d.harf",sondankacinci(dizi,harf))	;
}
