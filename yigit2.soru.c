//YI�IT&KUYRUK 2.Soru
//Kullan�c�dan al�nan N de�erine g�re y���ttan N adet say�y� �ektikten sonra y���t�n son durumunu tekrar yazd�r�n�z.
#include<stdio.h>
#define boyut 10

int Yigit[boyut];
int top=-1;
void Push(int x){//Y���ta ekle
		top++;
		Yigit[top]=x;
		printf("%d eklendi.\n",x);
		//Yigit[++top]=x;
}

int Pop(){//Silme-Veri �ekme
	//Y���t bo� mu kontrol�
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
