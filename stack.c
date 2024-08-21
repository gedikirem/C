//Yýðýt(Stack)
#include<stdio.h>
#define boyut 5
int yigit[boyut];
int top=-1;
//int isFull(){//yýðýt dolu mu kontrolü fonksiyonla
//	if(top==boyut-1){
//		return 1; true
//  else
//		return 0; false
//	}
//}
void push(int x){//yýðýta ekle
	if(top==boyut-1){//yýðýt dolu mu kontrolü
		printf("Yigit dolu\n");
	}
	else{
	top++;
	printf("%d eklendi.\n",x);
	yigit[top]=x;
	//yigit[++top]da yapabiliriz tek satýrda önce arttýrýr sonra iþlem yapar
	}
}
int pop(){//silme-veri çekme
	if(top==-1){//yýðýt boþ mu kontrolü
	printf("Yigit Bos");
	}
	else{
	int x=yigit[top];
	top--;
	return x;
	}

}
void Yazdir(){//yýðýt dizisini yazdýr
	int i;
	for(i=0;i<top;i++){//eleman sayýsý kadar döngü
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
	//push olmasý gerekmez mi  ????
	printf("Pop Sonucu:%d\n",b);
	
	//switch-case kullanýlarak menü oluþturulacak
	/*
	1.Yýðýta ekle->sayý gir
	2.Çýkar
	3.Yazdýr
	4.En üstteki elemaný göster
	5.Çýkýþ
	*/
}

