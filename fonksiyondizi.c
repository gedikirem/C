//dizi gönderme

void yazdir(int dizi[]){
	int i;
	printf("Dizi:\n");
	for(i=0;i<10;i++){
		printf("%d\n",dizi[i]);
	}
}

int main(){
	int dizi[10],i;
	printf("Dizi giriniz:\n");
	for(i=0;i<10;i++){
		scanf("%d",&dizi[i]);	
	}
	yazdir(dizi);
	
}

