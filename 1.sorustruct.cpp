//Bir sýnýftaki 10 öðrenci için öðrenci no,vize ve final notlarý tutulacaktýr. Bu iþlem için dizinin 
//her bir elemanýnda öðrencinin numarasý,vize ve final notu olacak þekilde 10 elemanlý
// bir dizi oluþturulup deðerleri kullanýcýdan alýnacak ve bu dizi NotHesapla fonksiyonuna
// gönderilip her öðrencinin ortalamasý ve öðrenci numarasý ekrana yazdýrýlacaktýr.
//struct birinci soru
struct bul{
	int no;
	int vizenotu;
	int finalnotu;
	
};
void yazdir(struct bul b){
	printf("ogrencinin numarasý:%d\nogrencinin vize notu:%d\nogrencinin final notu:%d",b.no,b.vizenotu,b.finalnotu);
	
}
int nothesapla(struct bul a){
	printf("ogrencinin not ortalamasý:%d\nogrenci numarasý:%d",a.vizenotu*40+a.finalnotu*60,a.no);
}
int main(){
	struct bul b1;
	int i,dizi[10]
	printf("lutfen ogrencinin vize,notunu ve numarasýný giriniz:");
	yazdir(bul b1);
	for(i=0;i<10;i++){
		printf("%d.ogrenci:");
		scanf("%d\n",%dizi[i]);
	}
   nothesapla(bul b1);
	
}
