//7.soru:Girilen 2 sayýnýn en büyük ortak bölenini(EBOB) özyinelemeli olarak bulunuz
#include<stdio.h>
#include<stdlib.h>
int ebob(int s1,int s2){//12 8
	if (s2 == 0)
    return s1;
    return ebob(s2, s1 % s2);
}
int main(){
	int sayi1,sayi2;
	printf("2 adet sayi giriniz:");
	scanf("%d %d",&sayi1,&sayi2);
	printf(" Ebob:%d",ebob(sayi1,sayi2));
}
