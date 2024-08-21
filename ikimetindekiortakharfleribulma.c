#include<stdio.h>
int main(){
int i,t=0;
 char aylar[4];
 char ad;
 ad="ocak";
	for(i=0;i<3;i++){
		aylar[i]=ad;
		printf("%d.ay=\n",i+1);
		while(aylar[t]!='\0'){
		printf("%c",aylar[t]);
		t++;
	}
	}
	
	
	
	
}

