//her bir eleman kadar y�ld�z olusturma 
//10 elemanl� bir dizide
#include<stdio.h>
int main(){
char metin[200],h;
printf("Metin Giriniz:");
gets(metin);
int i=0,b=0;
while(metin[i]!='\0'){
		i++;
		if(metin[i]==' ')
		b++;
}

if(b>0)
printf("Kelime Sayisi:%d\nBosluk Sayisi:%d ",b+1,b);
}
