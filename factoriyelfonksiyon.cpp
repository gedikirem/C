//kombinasyon =n!/(n-r)!.r!

int factoriyel(int x){
	int r,n,nFakt,rFakt;
	int i,sonuc=1;
	for(i=n;i>0;i--){
		nFakt=nFakt*i;
	}
	for(i=n-r;i>0;i--){
		nFakt=nFakt*i;
	}
	for(i=r;i>0;i--){
		rFakt=rFakt*i;
	}
	return sonuc;
}
int main(){
	int n,r;
	n=5;
	r=2;
	int i;
	int sonuc=factoriyel(n)/(factoriyel(n-r)*factoriyel(r));
}

