#include<stdio.h>
//kullanýcýdan n tane sayi alýp bu sayýlarý toplam fonksiyonuna gönderip toplamý bulun ve sonucu main de yazdýrýn
int toplama=0;
int toplam(int *p){
		toplama+=*p;
			return toplama;
	}	
int main(){
	int n,i,b;
	int *a=(int*)malloc(sizeof(int));
	printf("kac adet sayi girmek istiyorsunuz:");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("%d.sayi giriniz:",i+1);
		scanf("%d",a);
		toplam(a);	
	}
	printf("toplam sonuc=%d",toplama);
}
