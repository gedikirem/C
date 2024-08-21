//Bir sýnýftaki 10 öðrenci için öðrenci no,vize ve final notlarý tutulacaktýr. Bu iþlem için dizinin 
//her bir elemanýnda öðrencinin numarasý,vize ve final notu olacak þekilde 10 elemanlý
// bir dizi oluþturulup deðerleri kullanýcýdan alýnacak ve bu dizi NotHesapla fonksiyonuna
// gönderilip her öðrencinin ortalamasý ve öðrenci numarasý ekrana yazdýrýlacaktýr.
struct bul{
	int no;
	int vizenotu;
	int finalnotu;
};
int nothesapla(struct bul a){
	printf("ogrencinin  numarasi:%d\nnot ortalamasi:%f\n",a.no,a.finalnotu*0.60+a.vizenotu*0.40);
}
int main(){
	struct bul b1[10];
	int i;
	printf("lutfen ogrencinin vize,final notunu ve numarasini giriniz:\n");
	for(i=0;i<10;i++){
		printf("%d.ogrenci:",i+1);
		scanf("%d\n%d\n%d",&b1[i].no,&b1[i].vizenotu,&b1[i].finalnotu);
	}
	for(i=0;i<10;i++){
		printf("%d.",i+1);
		nothesapla(b1[i]);
	}
}
