//7. Parametre olarak verilen 2 say�n�n toplam�n� ve fark�n� bulan bir fonksiyon
//yaz�lacakt�r. Say�lar main metodunda kullan�c�dan al�narak fonksiyona
//g�nderilecektir, toplam ve fark sonu�lar� da main metodunda yaz�lacakt�r.(global
//de�i�ken kulllan�lmayacakt�r.)
#include<stdio.h>
int islem(int *p,int *m){
	printf("%d",*p-*m);
	return *p+*m;

}

int main(){
	int *p=(int*)malloc(sizeof(int));
	int *m=(int*)malloc(sizeof(int));
	printf("Sayi giriniz:\n");
	scanf("%d %d",p,m);
	

	printf("=fark\n%d=toplam",islem(p,m));
	
	}
	

