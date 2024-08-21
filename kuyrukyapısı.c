//Kuyruk Yapýsý(Queue)
#include<stdio.h>
#define boyut 5
int kuyruk[boyut];
int ilk=-1,son=-1;//Front rear
int DoluMu(){
	if(son==boyut-1){//dolu
		return 1;
	}
	else{
		return 0;//dizi dolu deðil
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
	if(ilk==son){//tek eleman kaldýysa kuyruðu boþalt
		ilk=-1;
		son=-1;
	}
	else{
		//kaydýrma olmadan normal kuyruk iþlemi için ilk arttýr
		ilk++;
		//kaydýrma yapýlýrsa(her eleman bir adým öne kayacak)
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
