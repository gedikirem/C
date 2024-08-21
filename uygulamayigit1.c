//Stack Uygulama,ekleme,çýkarma,en üstteki 2 elemaný toplama
#include<stdio.h>
#define boyut 10
int yigit[boyut];
int top=-1;
void push(int veri){
	if (top+1==boyut){
	printf("Stack is Full");
	}
	else{
		top++;
		yigit[top]=veri;
	}
}
	void pop(){
		if(top==-1){
			printf("Stack is Empty");
		}
		else{
			top--;
		}
	}
	int peek(){
		return yigit[top];
	}
	void yazdir(){
		int i;
		for(i=0;i<top+1;i++){
		printf("%d ",yigit[i]);
		}
	}
	int main(){
	int i=4,secim,sayi;
	while(i>=secim)	{
		printf("\n1-Ekleme");
		printf("\n2-Cikarma");
		printf("\n3-Yazdir");
		printf("\n4-En ustteki elemani yazdir");
		printf("\n5-Cikis");
		printf("\nLutfen seciminizi giriniz:");
		scanf("%d",&secim);
		switch(secim){
			case 1:
				printf("\nSayi Giriniz:") ;
				scanf("%d",&sayi) ;
				push(sayi) ;
				yazdir();
				break;
				
			case 2:
				pop();
				yazdir();
				break;
			
			case 3:
				yazdir();
				break;
				
			case 4:
				printf("\n En üstteki yigit degeri:%d",peek());
		
		}	
	}	
	}
