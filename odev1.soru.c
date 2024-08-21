//1.soru doðru cevap(kendi çözümüm)
int sondankacinci(char dizi[],char harf){
	int i=0,a;
while(dizi[i]!='\0'){
	i++;
}
a=i;
for(i=a-1;i>0;i--){
	if(dizi[i]==harf)
		return a-i;
}}
int main(){
	char dizi[30],harf;
	printf("Kelime Giriniz:"),
	gets(dizi);
	printf("Harf Giriniz:");
	scanf("%c",&harf);
printf("Sondan %d.harf",sondankacinci(dizi,harf));
}
