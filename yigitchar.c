/*
Girilen bir kelimeyi y���t kullanarak tersten yazd�r�n�z.(char tipinde bir y���t dizisi kullan�lacakt�r, t�m karakterler tek tek push 
fonksiyonu ile y���ta at�lacak daha sonra pop fonksiyonu ile �ekilen karakterler ekrana yazd�r�lacakt�r.)
*/
#include<stdio.h>
#define boyut 10
char yigit[boyut],top=-1;

void push(char eleman){//y���ta ekle
	if(top==boyut-1){//y���t dolu mu kontrol�
		printf("Yigit dolu\n");
	}
	else{
	top++;
	printf("%c eklendi.\n",eleman);
	yigit[top]=eleman;
	//yigit[++top]da yapabiliriz tek sat�rda �nce artt�r�r sonra i�lem yapar
	}
}
void Yazdir(){//y���t dizisini yazd�r
	int i;
	for(i=0;i<=top;i++){//eleman say�s� kadar d�ng�
		printf("%c ",yigit[i]);
	}
}
int main(){
	char eleman[20];
	int i=0;	
	printf("Char tipinde dizi giriniz:\n");
	gets(eleman);
	while(eleman[i]!='\0'){
		push(eleman[i]);
		i++;
	}
	Yazdir();
	
	
	
}
