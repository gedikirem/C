//Bir s�n�ftaki 10 ��renci i�in ��renci no,vize ve final notlar� tutulacakt�r. Bu i�lem i�in dizinin 
//her bir eleman�nda ��rencinin numaras�,vize ve final notu olacak �ekilde 10 elemanl�
// bir dizi olu�turulup de�erleri kullan�c�dan al�nacak ve bu dizi NotHesapla fonksiyonuna
// g�nderilip her ��rencinin ortalamas� ve ��renci numaras� ekrana yazd�r�lacakt�r.
//struct birinci soru
struct bul{
	int no;
	int vizenotu;
	int finalnotu;
	
};
void yazdir(struct bul b){
	printf("ogrencinin numaras�:%d\nogrencinin vize notu:%d\nogrencinin final notu:%d",b.no,b.vizenotu,b.finalnotu);
	
}
int nothesapla(struct bul a){
	printf("ogrencinin not ortalamas�:%d\nogrenci numaras�:%d",a.vizenotu*40+a.finalnotu*60,a.no);
}
int main(){
	struct bul b1;
	int i,dizi[10]
	printf("lutfen ogrencinin vize,notunu ve numaras�n� giriniz:");
	yazdir(bul b1);
	for(i=0;i<10;i++){
		printf("%d.ogrenci:");
		scanf("%d\n",%dizi[i]);
	}
   nothesapla(bul b1);
	
}
