//11. Verilen sayýnýn kaç basamaklý olduðunu özyinelemeli olarak bulunuz.
int t=0;
int basamak(int sayi){
	int b;
	b=sayi%10;
	if(b==0)
	return 0;
	t++;
	printf("%d\n",b);
	basamak(sayi/10);
	return t;
}
int main(){
	int sayi;
	printf("Sayi giriniz:\n");
	scanf("%d",&sayi);
	printf("Basamak sayisi:%d",basamak(sayi));
}
