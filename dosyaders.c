#include<stdio.h>
void  DosyaYaz(){
//	FILE tipinde pointer doysa ad�nda de�i�ken tan�mlad�k
  FILE *dosya;
dosya=fopen("C:\\dosya\\sacma.txt","w"); //dosyay� olu�turup a�acaz
if (dosya==NULL){
printf("Surucu bulunamadi.\n");
exit(0);
}
//char isim[]="irem";
fprintf(dosya,"%s","irem gedik\n");//formatl� yazd�rmak i�in
fputs("programlamaya giris",dosya);//direkt yazd�rmak i�in

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
while(fscanf(d,"%s",&metin)!=EOF){//End Of File dosya sonuna gelmediyse dosya �al��maya devam etsin
printf("%s\n",metin);
}
fclose(d);
}
int main(){
	//switch-case ile men�.Dosya oku,yaz,Ekle,Sil,Ad�n�DE�i�tir
	//DosyaYaz();
	DosyaOku();
}

