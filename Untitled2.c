#include<stdio.h>

int main(){
	int a,sayi,i;
	sayi=73;
	do{
	printf("lutfen bir sayi giriniz:");	
	for(i=i;i<100;i++){
		scanf("%d",&a);
	if(a<sayi){
		printf("lutfen daha buyuk bir sayi giriniz!");
	}
	else if(a>sayi){
		printf("lutfen daha kucuk bir sayi giriniz!");
	}		
	else{		
		printf("Tebrikler %d.denemede buldunuz",i);
	}	
}
}
while(sayi>0);
return 0;
}
