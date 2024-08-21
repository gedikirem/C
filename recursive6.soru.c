//6.soru:1-N arasý sayýlarýn toplamýný özyinelemeli olarak bulunuz.
int toplam(int N){
	if(N==0)
	return 0;
	else
	return N+toplam(N-1);	
	//mesela 4 olsun N miz
	//4+toplam(3)=7+toplam(2)=9+toplam(1)=10+toplam(0)=0 olduðunda duruyor zaten
}
int main(){
	int N;
	printf("lutfen bir sayi giriniz:");
	scanf("%d",&N);
   	printf("Sayilerin Toplami:%d",toplam(N));
}
