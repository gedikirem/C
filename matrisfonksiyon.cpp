#include<stdio.h>


void bastir(int matrisizim[][4],int size){
	int i,j;
	
for(i=0;i<size;i++){
	for(j=0;j<4;j++){
	printf("%d	",matrisizim[i][j]);
	}
	printf("\n");
}
	
}




int main(){
int i,j;
int matris[3][4];
printf("lutfen matrisi doldurunuz: ");
for(i=0;i<3;i++){
	for(j=0;j<4;j++){
		scanf("%d",&matris[i][j]);
	}
}


bastir(matris,3);
}





