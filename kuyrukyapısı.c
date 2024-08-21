//Kuyruk Yap�s�(Queue)
#include<stdio.h>
#define boyut 5
int kuyruk[boyut];
int ilk=-1,son=-1;//Front rear
int DoluMu(){
	if(son==boyut-1){//dolu
		return 1;
	}
	else{
		return 0;//dizi dolu de�il
	}
}
int BosMu(){
	if(ilk==-1)
	return 1;
	else 
	return 0;
}
void ekle(int eleman){//enqueue
	if(DoluMu()){
		printf("Kuyruk Dolu!!!\n");
		return ;
	}
	if(ilk==-1){
		ilk=0;
	}
	son++;
	kuyruk[son]=eleman;
	printf("%d elemani eklendi\n",eleman);
}
int cikar(){//dequeue
	if(BosMu()){
		printf("Kuyruk Bos!!!\n");
		return -1;
	}
	int eleman=kuyruk[ilk];
	if(ilk==son){//tek eleman kald�ysa kuyru�u bo�alt
		ilk=-1;
		son=-1;
	}
	else{
		//kayd�rma olmadan normal kuyruk i�lemi i�in ilk artt�r
		ilk++;
		//kayd�rma yap�l�rsa(her eleman bir ad�m �ne kayacak)
		/*
		int i;
		for(i=0;i<=son;i++){
			kuyruk[i]=kuyruk[i+1];
		}
		ilk=0;
		son=son-1;
	}*/
	printf("%d cikarildi\n",eleman);
	return eleman;
}}
void listele(){
	int i;
	for(i=ilk;i<=son;i++){
		printf("%d ",kuyruk[i]);
	}
}
int main(){
	ekle(9);
	ekle(6);
	listele();
int cikan=cikar();
	listele();
}
