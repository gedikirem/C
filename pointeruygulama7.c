//7. Parametre olarak verilen 2 sayının toplamını ve farkını bulan bir fonksiyon
//yazılacaktır. Sayılar main metodunda kullanıcıdan alınarak fonksiyona
//gönderilecektir, toplam ve fark sonuçları da main metodunda yazılacaktır.(global
//değişken kulllanılmayacaktır.)
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
	

