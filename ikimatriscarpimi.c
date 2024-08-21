//4x4 lük iki  matrisin çarpýmýný bulan
#include<stdio.h>
int main(){
srand(time(0));
int matris[4][4],matris1[4][4];
int i,j;
printf("*****Birinci Matris Sunar:*****\n");
for(i=0;i<4;i++){
	for(j=0;j<4;j++){
	matris[i][j]=rand()%10;
	matris1[i][j]=rand()%10;
	printf("%d ",matris[i][j]);	
}
printf("\n");
}
i=0;
j=0;
printf("*****Ikinci Matris Sunar*****\n");
for(i=0;i<4;i++){
	for(j=0;j<4;j++){
	printf("%d ",matris1[i][j]);
}
printf("\n");
}
i=0;
j=0;
printf("***Ve Iste Matrislerin Carpimi:***\n");
int matris2[4][4];
int carpim=1;
for(i=0;i<4;i++){
	for(j=0;j<4;j++){
	carpim=matris[i][j]*matris1[i][j];
	matris2[i][j]=carpim;
	printf("%d ",matris2[i][j]);
}
printf("\n");
}
}
