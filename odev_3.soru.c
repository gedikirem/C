//02220224038
//ÝREM GEDÝK
void tersCevir(int m,int matris[m][m]){
	int i,j;
	int sagkosegen[m][m],solkosegen[m][m];
for(i=0;i<m;m++){
	for(j=0;j<m;m++){
		if(i==j){
			solkosegen[m][m]=matris[i][j];}
			else if(i==m-j){
			sagkosegen[m][m]=matris[i][j];
	    	}	
	    	else{
		       }
	    }
	    sagkosegen[m][m]=solkosegen[i][j];
	    
	}
}

void matrisYazdir(int m,int matris[m][m]){
	int i,j;
	for(i=0;i<m;i++){
		for(j=0;j<m;j++){
			printf("%d",matris[i][j]);
		}
		printf("\n");
	}	
}
int main(){
	srand(time(0));
	int m;
	printf("kaclik matris istiyorsunuz?");
	scanf("%d",&m);
	int matris[m][m];
	int i,j;
	printf("ilk durum:\n");
	for(i=0;i<m;i++){
		for(j=0;j<m;j++){
		matris[i][j]=rand()%100;
		printf("%d ",matris[i][j]);
	}
	printf("\n");
	}}
	void terscevir(m,matris);
	void tersYazdir(m,matris);

