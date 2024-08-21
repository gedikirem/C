//STRUCT:YAPILAR
#include<stdio.h>
 struct ogrenci{
	int no;
	int sinif;
	char ad[20];
};
void yazdir(struct ogrenci ogr){
	printf("no:%d sinif:%d ad:%s\n ",ogr.no,ogr.sinif,ogr.ad);
}
int main(){
	struct ogrenci ogr1;
	printf("ogrencinin numarasi giriniz:");
	scanf("%d",&ogr1.no);
	printf("ogrencinin sinifini giriniz:");
	scanf("%d",&ogr1.sinif);
	printf("ogrencinin adini giriniz:");
	scanf("%s",&ogr1.ad);
	yazdir(ogr1);
	//typedef :struct ý birden fazla tanýmlamadan kullanmak istiyorsak	
}
