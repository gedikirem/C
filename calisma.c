//sýnav çalýþmasý
int islem(int *m,int *n){
		return *m-*n;
	}
int main(){
	int *m=(int*)malloc(sizeof(int));
	int *n=(int*)malloc(sizeof(int));
	scanf("%d%d",m,n);
	islem(m,n);
	printf("Fark=%d\n");
	*n=*n*(-1);
	islem(m,n);
	printf("Toplam=%d");
}
