//Palindrom sayý kontrolü(Ör:242 palindromdur, tersten yazýlýþý kendisine eþittir)
int main(){
	int sayi,x,t=0,a;
	printf("Sayi giriniz:");
	scanf("%d",&sayi);
	a=sayi;
	while(sayi>0){
	x=sayi%10;
	t=(t*10)+x;
	sayi=sayi-x;
	sayi=sayi/10;
}
	if(t==a)
	printf("Palindrom sayi");
	else
	printf("Palindrom sayi degil");
}
