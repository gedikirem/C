/*
Girilen bir kelimeyi yýðýt kullanarak tersten yazdýrýnýz.(char tipinde bir yýðýt dizisi kullanýlacaktýr, tüm karakterler tek tek push 
fonksiyonu ile yýðýta atýlacak daha sonra pop fonksiyonu ile çekilen karakterler ekrana yazdýrýlacaktýr.)
*/
#include<stdio.h>
#define boyut 10
char yigit[boyut],top=-1;

void push(char eleman){//yýðýta ekle
	if(top==boyut-1){//yýðýt dolu mu kontrolü
		printf("Yigit dolu\n");
	}
	else{
	top++;
	printf("%c eklendi.\n",eleman);
	yigit[top]=eleman;
	//yigit[++top]da yapabiliriz tek satýrda önce arttýrýr sonra iþlem yapar
	}
}
void Yazdir(){//yýðýt dizisini yazdýr
	int i;
	for(i=0;i<=top;i++){//eleman sayýsý kadar döngü
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
