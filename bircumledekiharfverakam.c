//Bir cümledeki büyük harf,küçük harf,rakam ve 
//diðer sembolleri bulma(aski tablosuyla)
int main(){
	char dizi[50];
	printf("Metin Giriniz:");
	gets(dizi); int i=0;
	while(dizi[i]!='\0'){
		if(dizi[i]>=48 && dizi[i]<=57){
			printf("%c Rakam\n",dizi[i]);
		}
		else if(dizi[i]>=65 && dizi[i]<=90){
			printf("%c Buyuk Harf\n",dizi[i]);
		}
		else if(dizi[i]>=97 && dizi[i]<=127){
			printf("%c Kucuk Harf\n",dizi[i]);
		}
		else
		printf("%c Diger\n",dizi[i]);
		i++;
	}
}
