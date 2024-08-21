//STRUCT:YAPILAR
#include<stdio.h>
 struct ogrenci{
	int no;
	int sinif;
	char ad[20];
};
void yazdir(struct ogrenci ogr){
	printf("no:%d sinif:%d ad:%s\n",ogr.no,ogr.sinif,ogr.ad);
}
int main(){
	struct ogrenci ogr1[3];
	int i;
	printf("Ogrencinin sinifi,numarasi ve adini giriniz:\n");
for(i=0;i<3;i++){
	scanf("%d%d%s",&ogr1[i].no,&ogr1[i].sinif,ogr1[i].ad);
}
for(i=0;i<3;i++){
	printf("%d.",i+1);
	yazdir(ogr1[i]);
}
}	
