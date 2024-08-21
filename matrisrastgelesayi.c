//matris rastgele
#include<stdio.h>
int main(){
	int n,s=0;
	printf("kaclik matris istiyorsunuz:\n");
	scanf("%d",&n);
int matris[n][n],i,j;
srand(time(0));
for(i=0;i<n;i++){
	for(j=0;j<n;j++){
		matris[i][j]=rand()%100;
	}
}

for(i=0;i<n;i++){
	for(j=0;j<n;j++){
	printf("%d ",matris[i][j]);
	if(matris[i][j]>50){
		s++;
	}
	}
	printf("\n");
}
	printf("\n");
printf("%d adet 50 den buyuk sayi var",s);
}
