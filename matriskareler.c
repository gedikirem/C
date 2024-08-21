//sayýlarýn karelerini yanlarýna yazdýran matris
#include<stdio.h>
int main(){
	int i,j,matris[10][2];
	for(i=0;i<10;i++){
		for(j=0;j<2;j++){
		matris[i][0]=(i+1);
		matris[i][1]=(i+1)*(i+1);
}}
	for(i=0;i<10;i++){
		for(j=0;j<2;j++){
		printf("%d ",matris[i][j]);
	}
	printf("\n");
}}

