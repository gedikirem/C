//YI�IT&KUYRUK 1.Soru
//10 adet say�y� rastgele �retip y���ta ekleyen ve sonra y���ttaki t�m de�erleri yazd�ran program�n kodunu yaz�n�z

#include<stdio.h>
#define boyut 10

int Yigit[boyut];
int top=-1;
void Push(int x){//Y���ta ekle
	if(isFull())//if(top==BOYUT-1){//Y���t dolu mu kontrol�
		printf("Yigit Dolu.");		
	}
	else{	
		top++;
		Yigit[top]=x;
		printf("%d eklendi.\n",x);
		//Yigit[++top]=x;
    }
}





int main(){
	srand(time(0));
	int x,i;
	for(i=0;i<boyut;i++){
		x=rand()%50;
		Push(x);
	}
}
