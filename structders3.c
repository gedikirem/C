struct tarih{
	int yil;
	int ay;
	int gun;
};
struct  ogrenci{
	int no;
	int sinif;
	char ad[20];	
	struct tarih dogumtarihi;//iç içe struct yapýsý	
};
// typedef struct Personeller{
void yazdir(struct ogrenci ogr){
	printf("no:%d sinif:%d ad:%s\n",ogr.no,ogr.sinif,ogr.ad);
	printf("Dogumtarihi:%d.%d.%d",ogr.dogumtarihi.gun,ogr.dogumtarihi.ay,ogr.dogumtarihi.yil);	
}	
int main(){
	struct ogrenci ogr1;
	printf("Okul numaranizi giriniz:");
	scanf("%d",&ogr1.no);
	printf("Sinif numaranizi giriniz:");
	scanf("%d",&ogr1.sinif);
	printf("Lutfen isim giriniz:\n");
	scanf("%s",&ogr1.ad);
	printf("Dogum tarihiniz gun,yil,ay olarak giriniz:");
	scanf("%d%d%d",&ogr1.dogumtarihi.gun,&ogr1.dogumtarihi.ay,&ogr1.dogumtarihi.yil);
	yazdir(ogr1);			
}
