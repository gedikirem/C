//matris
#include<stdio.h> 
int main(){
	int N;
	printf("Kaclik matris istiyorsunuz:\n");
	scanf("%d",&N);
	int matris[N][N],i,j;
	for(i=0;i<N;i++){
		for(j=0;j<N;j++){
			printf("Matrisin %d.satir %d.sutununu giriniz:",i+1,j+1);
			scanf("%d",&matris[i][j]);
		}
	}
	printf("Girilen Matris:\n");
	for(i=0;i<N;i++){
		for(j=0;j<N;j++){
	printf("%d ",matris[i][j]);
}
printf("\n");
}
	
}
