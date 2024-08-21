 //Girilen sayýnýn Harshad (sayýnýn kendisi rakamlarý toplamýna bölünüyor) olup olmadýðýný bulunuz.(1-9, 10, 12, 18, 20, .., 150, 153, …)
 #include<stdio.h>
 int main(){
 	int sayi,b,a,t=0;
 	printf("Sayi giriniz:");
 	scanf("%d",&sayi);
 	a=sayi;
 while(sayi>0){
 	b=sayi%10;
printf("%d\n",b);
 	sayi=sayi/10;
 	t=t+b;
 }
 printf("toplam:%d\n",t);
 if(a%t!=0)
 printf("Harshad sayi degil");
 else if(a%t==0)
 printf("Harshad sayi");
 }
