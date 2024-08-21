#include<stdio.h>
int main(){
	int x,y,i;
	y=79;
	do{
	printf("lutfen bir sayi tahmini girin:");
	for(i=0;i<100;i++){
		scanf("%d",&x);
				if(x<y){
					printf("lutfen daha buyuk bir sayi giriniz");
				}
				else if(x>y){
					printf("lutfen daha kucuk bir sayi giriniz");
				}
				else{
					printf("Sayiyi %d.denemede buldunuz",i+1);
	}
}

while(y>0);
return 0;
}
