#include<stdio.h>

void dortgen(int kisa,int uzun){
	
int i,j;
for(i=0;i<uzun;i++){
	for(j=0;j<kisa;j++){
		
		printf("*");
	}
	printf("\n");
}
}

int main(){
int x,y;
printf("lutfen cizdireceginiz dortgenin boyutlarini giriniz:")	;
scanf("%d %d",&x,&y);
dortgen(x,y);
return 0;
	
}
