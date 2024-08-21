//Doðrusal Arama(Lineer Searching)
int LineerSearch(int dizi[],int x,int aranan){
	int i=0;
	for(i=0;i<x;i++){
		if(aranan==dizi[i]){
			return i;
		}
	}
		return -1;
}
int main(){
	int x;
	printf("Dizinin eleman sayisini girin:\n");
	scanf("%d",&x);
	int dizi[x],i=0;
	while(i<x){
		printf("Sayi giriniz:");
		scanf("%d",&dizi[i]);
		i++;
	}
	int aranan;
	printf("Aranan sayiyi giriniz:\n");
	scanf("%d",&aranan);
	int sonuc=LineerSearch(dizi,x,aranan);
	if(sonuc==-1){
		printf("Aranan sayi bulunamadi");
	}
	else{
		printf("Aranan sayi %d.indekste",sonuc+1);
	}
}
