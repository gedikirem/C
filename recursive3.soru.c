int karakteryaz(char kelime[10],int i,int j){
     if(j-1==i)
     return 0;
	printf("%c\n",kelime[i]);
	karakteryaz(kelime,i-1,j);	
}
int main(){
	char kelime[20],i=0;
	printf("lutfen kelime giriniz:");
	gets(kelime);
	while(kelime[i]!='\0'){
		i++;
	}
	karakteryaz(kelime,i,0);	
}
