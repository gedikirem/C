 #include<stdio.h>
int main(){
	int i,j,x;
	printf("kac satir olsun?\n");
	scanf("%d",&x);
	for(i=0;i<x;i++){
		for(j=0;j<(2*x)-1;j++){
			if((i+j)>=(x-1) && (j-i)<=(x-1)){
				printf("* ");
			}
			else{
				printf("  ");
			}
		}
		printf("\n");
	}
}
