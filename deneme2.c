struct kitap{
	char adi[20];
	char yazar[20];
	int sayfasayisi;
};
void yazdir(struct kitap ktp){
	printf("kitap adi:%s\nyazar:%s\nsayfa sayisi:%d",ktp.adi,ktp.yazar,ktp.sayfasayisi);
}
int main(){
	struct kitap k1;
	printf("kitap adi:");
	gets(k1.adi);
	printf("kitap yazari:");
	gets(k1.yazar);
	printf("sayfa sayisi:");
	scanf("%d",&k1.sayfasayisi);
	yazdir(k1);
	
}
