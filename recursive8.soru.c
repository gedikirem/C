//8.soru:Girilen sayýnýn tam bölenlerini ekrana yazdýran özyinelemeli fonksiyonu yazýnýz.
int tambolen(int sayi,int i){
	if(i==sayi+1)
	return 0;
	if(sayi%i==0)
	printf("%d\n",i);
	tambolen(sayi,i+1);
}
int main(){
	int sayi;
	printf("lutfen bir sayi giriniz:");
	scanf("%d",&sayi);
	printf("Sayinin Tam Bolenleri:\n");
	tambolen(sayi,1);
}
