//Global de�i�ken kullanmadan de�i�kenin de�erini de�i�tirme
//1.yol
#include<stdio.h>
//int degistir(int a){
//	a=10;
//	printf("%d\n",a);
//}
//int main(){
//	int a=5;
//	int *p=&a;
//	printf("a:%d\n",a);
//	*p=6;
//	printf("a:%d\n",a);
//}
//2. yol
int degistir(int a){
	a=10;
}
int degistirP(int *y){
	*y=20;
}
int main(){
	int a=5;
	int *p=&a;
	printf("a:%d\n",a);
	*p=6;//a de�erini de�i�tirir
	printf("a:%d\n",a);
	degistirP(p);
	printf("a:%d\n",a);
	
}



