
int fonksiyon(int n,int i){
	if(i==n+1)
	return 0;
	printf("%d\n",i);
	fonksiyon(n,i+1);
}
int main(){
	int sayi;
	scanf("%d",&sayi);
	fonksiyon(sayi,1);
}
