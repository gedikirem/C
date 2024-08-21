#include<stdio.h>


int kupbul(int sayi){
	
	int kupu;
	kupu=sayi*sayi*sayi;
	return kupu;
}



int main(){
	
	
	int x;
	
	printf("lutfen kupunu bulma istediginiz sayiyi giriniz:");
	scanf("%d",&x);
	printf("sonuc=%d",kupbul(x));
	
}
