/* 
 Kullanýcýdan alýnan sayýlar bir kuyruk yapýsýna eklendikten sonra kuyruktaki sayýlarýn toplamýný ve en büyük 
sayýyý ekrana yazdýrýnýz.
*/
#include<stdio.h>
#define boyut 10	
int kuyruk[boyut],bas=-1,son=-1;
void Ekle(int veri){
	if(son==boyut-1){
		printf("Kuyruk dolu");
	}
		son++;
		kuyruk[son]=veri;
}
void Listele(){
int i,toplam;
int min=0;
for(i=bas+1;i<=son;i++){
	printf("%d\n",kuyruk[i]);
	toplam=toplam+kuyruk[i];
	if(kuyruk[i]<min){
		min=kuyruk[i];
	}
}	
	printf("Toplam=%d",toplam);
	printf("Kuyruktaki en kucuk sayi:%d",min);
}
int main(){
int i,x;
while(x!=-1){
	scanf("%d",&x);
	Ekle(x);
}
printf("Kuyruktaki Elemanlar:\n")	;
Listele();

}
