//5.soru :Fibonacci serisinin n.elemanını özyinelemeli olarak bulunuz
int fib(int n){
	if(n==0)
	return 0;
	if(n==1)
	return 1;
	return 	fib(n-1)+fib(n-2);
}
int main(){
	int n;
	printf("n sayisi girin:\n");
	scanf("%d",&n);
	printf("%d",fib(n));
}
