//5 öðrenci için 0-100 arasý Vize,Final notlarýndan oluþan bir matriste her öðrencinin ortalama notunu
//hesaplayýp 4.sütuna yazýnýz
#include<stdio.h>
int main(){
	int matris[5][5],i,j,v,f,o;
	for(i=0;i<5;i++){
		matris[i][0]=i+1;
		printf("%d.ogrencinin vize notu:",i+1);
		scanf("%d",&v);
		matris[i][1]=v;
		printf("%d.ogrencinin final notu:",i+1);
		scanf("%d",&f);
		matris[i][2]=f;
		o=matris[i][1]*4/10+matris[i][2]*6/10;
		matris[i][3]=o;
	}
		for(i=0;i<5;i++){
				for(j=0;j<4;j++){
					printf("%d ",matris[i][j]);
}
printf("\n");
}
	
	
}
