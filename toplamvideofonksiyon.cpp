#include<stdio.h>
int toplam(int x,int y){
	
	int sonuc;
	sonuc=x+y;
	return sonuc;
	

}

int main(){
	
	
int t,y,z;
printf("lutfen iki sayi giriniz:");
scanf("%d %d",&y,&z);
printf("toplam=%d",toplam(y,z));
}
