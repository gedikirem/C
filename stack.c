//Y���t(Stack)
#include<stdio.h>
#define boyut 5
int yigit[boyut];
int top=-1;
//int isFull(){//y���t dolu mu kontrol� fonksiyonla
//	if(top==boyut-1){
//		return 1; true
//  else
//		return 0; false
//	}
//}
void push(int x){//y���ta ekle
	if(top==boyut-1){//y���t dolu mu kontrol�
		printf("Yigit dolu\n");
	}
	else{
	top++;
	printf("%d eklendi.\n",x);
	yigit[top]=x;
	//yigit[++top]da yapabiliriz tek sat�rda �nce artt�r�r sonra i�lem yapar
	}
}
int pop(){//silme-veri �ekme
	if(top==-1){//y���t bo� mu kontrol�
	printf("Yigit Bos");
	}
	else{
	int x=yigit[top];
	top--;
	return x;
	}

}
void Yazdir(){//y���t dizisini yazd�r
	int i;
	for(i=0;i<top;i++){//eleman say�s� kadar d�ng�
		printf("%d ",yigit[i]);
	}
}
int main(){
	push(1);
	pop();
	push(2);
	push(3);
	pop();
	push(4);


	int a=pop();
	printf("Pop Sonucu:%d\n",a);
	int b=pop();
	//push olmas� gerekmez mi  ????
	printf("Pop Sonucu:%d\n",b);
	
	//switch-case kullan�larak men� olu�turulacak
	/*
	1.Y���ta ekle->say� gir
	2.��kar
	3.Yazd�r
	4.En �stteki eleman� g�ster
	5.��k��
	*/
}

