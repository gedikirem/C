int factoriyel(int x){
	int i,sonuc=1;
	for(i=x;i>0;i--){
		sonuc=sonuc*i;
	}
	return sonuc;
}
int main(){
	int n,r;
	n=5;
	r=2;
	int i;
	int sonuc=factoriyel(n)/(factoriyel(n-r)*factoriyel(r));
	printf("%d"sonuc);
}
