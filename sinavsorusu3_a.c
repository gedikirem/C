
//S�nav sorusu-3
//Bir oyun program�nda her bir oyuncunun ad�, ya�� ve kazand��� puan bilgileri tek boyutlu bir dizide
//tutulmak istenmektedir.
//a) Bu i�lem i�in kullan�lmas� gereken yap�y� 10 oyuncu i�in olu�turduktan sonra her bir oyuncunun ad�n�
//ve ya� bilgisini kullan�c�dan al�p, puan bilgisini de 0-1000 aras� rastgele say�lardan �retiniz .
//b) PuanGoster isimli bir fonksiyon yaz�lacakt�r. Bu fonksiyon oyuncu
// bilgilerini alacak ve oyun puan�
//500�den fazla olan oyuncular�n isim, ya� ve kazand��� puan bilgilerini ekrana yazd�racakt�r
struct Oyuncu{
char isim[50];
int puan;
int yas;
};
void PuanGoster(struct Oyuncu dizi[]){
printf("Puani 500'den fazla olan oyuncular:\n");
int i;
for(i=0;i<10;i++){
if(dizi[i].puan>=500){
printf("Oyuncu adi:%s Yas:%d puan:%d \n",dizi[i].isim,dizi[i].yas,dizi[i].puan);
}}}
int main(){
srand(time(0));
struct Oyuncu dizi[10];
int i;
for(i=0;i<10;i++){
printf("%d.Oyuncunun adi:",i+1);
scanf("%s",dizi[i].isim);
printf("%d.Oyuncunun yasi:",i+1);
scanf("%d",&dizi[i].yas);
dizi[i].puan=rand()%1000;
}
PuanGoster(dizi);
}
