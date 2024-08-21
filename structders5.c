
struct tarih{
	int dogumyili;
	int dogumayi;
	int dogumgunu;	
};
struct ogrenci{
	int no;
	int sinif;
	char ad[20];
	struct tarih t;	
};

typedef struct personeller{
	float maas;
	char ad[20];
	struct tarih isebaslamatarihi;	
}personeller;
void yazdir(struct ogrenci ogr){	
	printf("no:%d sinif:%d adi:%s\n",ogr.no,ogr.sinif,ogr.ad);
	printf("dogum tarihi:%d.%d.%d",ogr.t.dogumgunu,ogr.t.dogumayi,ogr.t.dogumyili);
}
void personelYazdir(struct personeller p){
printf("maas:%f ad:%s\n",p.maas,p.ad);
if(p.isebaslamatarihi.dogumyili<2015){
	printf("Maasina zam yapilacak");
}
}
int main(){
	struct ogrenci ogr1;
	struct personeller p1;
	printf("Lutfen numaranizi giriniz:");
	scanf("%d",&ogr1.no);
	printf("Lutfen sinifinizi giriniz:");
	scanf("%d",&ogr1.sinif);
	printf("Lutfen adinizi giriniz:");
	scanf("%s",&ogr1.ad);
	printf("Lutfen dogum gununuzu gun.ay.yil olarak giriniz:");
	scanf("%d",&ogr1.t.dogumgunu);
	scanf("%d",&ogr1.t.dogumayi);
	scanf("%d",&ogr1.t.dogumyili);
	yazdir(ogr1);
	printf("\n");
	printf("Personel maasi giriniz:");
	scanf("%f",&p1.maas);
	printf("Personel adi giriniz:");
	scanf("%s",&p1.ad);
	printf("Personel ise giris tarihi giriniz:");
	scanf("%d",&p1.isebaslamatarihi.dogumyili);
	personelYazdir(p1);
}
