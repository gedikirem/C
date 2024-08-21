int f(int a){
 if(a < 1)
 return 0;
 else
 return (a % 10) + f(a / 10);
 //6+f(39)=15+f(3)=18+f(0.3)=0.3<1 den küçük olduğu için duruyor 
}
int main(){
 int sayi=396;
 int x=f(sayi);
 printf("%d", x);
}
