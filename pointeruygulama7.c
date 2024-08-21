//7. Parametre olarak verilen 2 sayýnýn toplamýný ve farkýný bulan bir fonksiyon
//yazýlacaktýr. Sayýlar main metodunda kullanýcýdan alýnarak fonksiyona
//gönderilecektir, toplam ve fark sonuçlarý da main metodunda yazýlacaktýr.(global
//deðiþken kulllanýlmayacaktýr.)
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
	

