#include<stdio.h>
int enbuyuk(int matris[5][5]){
	int i,j,max=matris[0][0];
		for(i=0;i<5;i++){
		for(j=0;j<5;j++){
		if(max[i][j]>max)
		max=matris[i][j];
		
	}
}
	return max;
}

int main(){
	srand(time(0));
	int i,j;
	int matris[5][5]
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			matris[i][j]=-rand()%100;
	}
}
	
}
