//san�r�m soru �u:kullan�c�dan bir char dizisi ve bir harf al�p
//o harfin dizide varsa ka� adet oldu�unu d�nd�ren fonksiyon
int kacadet(char dizi[],char harf,int N){
	int i,t=0;
	for(i=0;dizi[i]!='\0';i++){
		if(dizi[i]==harf){
			t++;
		}
	}
	if(t>0)
	printf("%d adet aradiginiz harf var",t);
	if(t==0)
	printf("Aradiginiz Harf Bulunamadi!");
}
int main(){
char harf,kelime[20];
int i=0;
printf("Kelime Giriniz!:");
gets(kelime);
while(kelime[i]!='\0'){
	printf("%c\n",kelime[i]);
	i++;	
}
printf("Eleman Sayisi:%d\n",i);
printf("Aradiginiz harf:");
scanf("%c",&harf);
kacadet(kelime,harf,i);	
}
