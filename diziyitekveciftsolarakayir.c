//Verilen bir dizideki elemanlarý tek ve çift iki ayrý diziye ayýrma
#include<stdio.h>
int main(){
	int N;
	printf("lutfen dizinin eleman sayisini girin:");
	scanf("%d",&N);
	int dizi[N],i;
	printf("Lutfen Dizi Elemanlarini Girin:\n");
	for(i=0;i<N;i++){
		printf("%d.eleman: ",i+1);
		scanf("%d",&dizi[i]);
}
	printf("Cift Sayiler Dizisi:\n");
	for(i=0;i<N;i++){
		if(dizi[i]%2==0){
			printf("%d\n",dizi[i]);
		}}
	printf("Tek Sayiler Dizisi:\n");
	for(i=0;i<N;i++){
		if(dizi[i]%2!=0){
			printf("%d\n",dizi[i]);
	}}}
