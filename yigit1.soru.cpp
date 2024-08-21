//YIÐIT&KUYRUK 1.Soru
//10 adet sayýyý rastgele üretip yýðýta ekleyen ve sonra yýðýttaki tüm deðerleri yazdýran programýn kodunu yazýnýz

#include<stdio.h>
#define boyut 10

int Yigit[boyut];
int top=-1;
void Push(int x){//Yýðýta ekle
	if(isFull())//if(top==BOYUT-1){//Yýðýt dolu mu kontrolü
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
