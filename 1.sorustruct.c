//Bir s�n�ftaki 10 ��renci i�in ��renci no,vize ve final notlar� tutulacakt�r. Bu i�lem i�in dizinin 
//her bir eleman�nda ��rencinin numaras�,vize ve final notu olacak �ekilde 10 elemanl�
// bir dizi olu�turulup de�erleri kullan�c�dan al�nacak ve bu dizi NotHesapla fonksiyonuna
// g�nderilip her ��rencinin ortalamas� ve ��renci numaras� ekrana yazd�r�lacakt�r.
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
