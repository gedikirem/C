//5 ��renci i�in 0-100 aras� Vize,Final notlar�ndan olu�an bir matriste her ��rencinin ortalama notunu
//hesaplay�p 4.s�tuna yaz�n�z
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
