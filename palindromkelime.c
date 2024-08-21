//palindrom kelime
#include<stdio.h>
int main(){
	char dizi[20];
	int i=0,j=0,s=0;
	printf("Kelime giriniz:\n");
	scanf("%s",&dizi);
	while(dizi[i+1]!='\0'){
		i++;
	}
	while(j<i){
		if(dizi[j]==dizi[i]){
		}
		else{
			s++;
		}
	j++;
	i--;}
	if(s==0){
		printf("Girdiginiz kelime palindromdur");
	}
	else {
		printf("Girdiginiz kelime palindrom degidir");
	}
	}
