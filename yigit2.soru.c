//YIÐIT&KUYRUK 2.Soru
//Kullanýcýdan alýnan N deðerine göre yýðýttan N adet sayýyý çektikten sonra yýðýtýn son durumunu tekrar yazdýrýnýz.
#include<stdio.h>
#define boyut 10

int Yigit[boyut];
int top=-1;
void Push(int x){//Yýðýta ekle
		top++;
		Yigit[top]=x;
		printf("%d eklendi.\n",x);
		//Yigit[++top]=x;
}

int Pop(){//Silme-Veri çekme
	//Yýðýt boþ mu kontrolü
	if(top==-1){
		printf("Yigit Bos.");
	}
	else{
		int x=Yigit[top];
		top--;		
		printf("%d silindi\n",x);
		return x;	
	}
	
}
	void yazdir(){
		int i;
		for(i=0;i<top+1;i++){
		printf("%d\n",Yigit[i])	;
		}
	}
int main(){
	srand(time(0));
	int x,i;
	for(i=0;i<boyut;i++){
		x=rand()%50;
	    Push(x);
	}
	int N;
	printf("Silmek istediginiz kadar N degeri giriniz:");
	scanf("%d",&N);
	int j;
	for(j=0;j<N;j++){
		Pop(x);
	}
	printf("Yigit Son Durum:\n");
	yazdir();
	
}
