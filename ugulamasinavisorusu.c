#include<stdio.h>
int teksayidonustur(int dizi[],int N){
	int i,t=0;
	printf("Tek Sayilar:\n");
	for(i=0;i<N;i++){
	if(dizi[i]%2==0){
		t++;
		dizi[i]=dizi[i]+1;
			printf("%d\n",dizi[i]);}
		else {
			printf("%d\n",dizi[i]);
		}
	}
	if(t>0)
	printf("yer degistirme sayisi:%d\n",t);	
	if(t==0){
		printf("Cift Sayi Bulunamadi!");
	}
}
int main(){
int N,i;
printf("lutfen N degerini giriniz:\n");
scanf("%d",&N);
int dizi[N];
for(i=0;i<N;i++){
	printf("%d.sayi:",i+1);
	scanf("%d",&dizi[i]);

}
teksayidonustur(dizi,N);

}
