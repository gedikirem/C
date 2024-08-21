#include<stdio.h>

#define pi 3.14//sabit degerler
int a=2;//global degisken
int yazdir (int a){
	a++;
	printf("%d\n",a);
}
int main(){
	int a=5;//yerel degisken
	yazdir(a);
	printf("%d ",a);
}
