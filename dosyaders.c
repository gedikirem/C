#include<stdio.h>
void  DosyaYaz(){
//	FILE tipinde pointer doysa adýnda deðiþken tanýmladýk
  FILE *dosya;
dosya=fopen("C:\\dosya\\sacma.txt","w"); //dosyayý oluþturup açacaz
if (dosya==NULL){
printf("Surucu bulunamadi.\n");
exit(0);
}
//char isim[]="irem";
fprintf(dosya,"%s","irem gedik\n");//formatlý yazdýrmak için
fputs("programlamaya giris",dosya);//direkt yazdýrmak için

fclose(dosya);
printf("Dosyaya yazma mesaji tamamlandi");

}
void DosyaOku(){
	FILE *d;
	d=fopen("C:\\dosya\\sacma.txt","r");
	if (d==NULL){
    printf("Dosya acma hatasi.\n");
    exit(0);
}
char metin[100];
while(fscanf(d,"%s",&metin)!=EOF){//End Of File dosya sonuna gelmediyse dosya çalýþmaya devam etsin
printf("%s\n",metin);
}
fclose(d);
}
int main(){
	//switch-case ile menü.Dosya oku,yaz,Ekle,Sil,AdýnýDEðiþtir
	//DosyaYaz();
	DosyaOku();
}

