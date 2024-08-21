#include<stdio.h>
int main(){
	int *p=(int*)malloc(sizeof(int)*5);
	int i;
	for(i=0;i<5;i++){
		printf("%p\n",p);
	p++;
	}
}
	
	
