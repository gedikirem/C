//matrisin köþegen toplamý
#include<stdio.h>
int main(){
	srand(time(0));
	int matris[4][4],i,j,t=0,t1=0;
	for(i=0;i<4;i++){
	for(j=0;j<4;j++){
		matris[i][j]=rand()%10;
	}
}
	for(i=0;i<4;i++){
	for(j=0;j<4;j++){
		printf("%d ",matris[i][j]);
	}
	printf("\n");}
	
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
		if(i==j){
			t+=matris[i][j];
		}
		else if(i==3-j){
			t1+=matris[i][j];
		}
	}}
	printf("Sol kosegenin toplami:%d\n",t);
	printf("Sag kosegenin toplami:%d",t1);
	

}
