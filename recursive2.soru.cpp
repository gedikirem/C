//2. N-1 aras� say�lar� tersten  �zyinelemeli olarak yazd�ran fonksiyonu yaz�n�z.
#include<stdio.h>

int fonksiyon(int n){
	if(n==0)
	return 0;
	printf("%d\n",n);
	fonksiyon(n-1);

	
}

int main(){
	int n;
	printf("N sayisi giriniz:");
	scanf("%d",&n);
	fonksiyon(n);
}
