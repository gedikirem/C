//Girilen say�n�n fakt�riyelini �zyinelemeli fonksiyon ile bulunuz.
int faktoriyelbul(int x,int i){
	if(x==1)
	return i;
	i=i*x;
	faktoriyelbul(x-1,i);
}
int main(){
	int sayi,i;
	printf("lutfen bir sayi giriniz:");
	scanf("%d",&sayi);
printf("sayinin faktoriyeli=%d",faktoriyelbul(sayi,1));
}
