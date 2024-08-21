
//Sýnav sorusu-3
//Bir oyun programýnda her bir oyuncunun adý, yaþý ve kazandýðý puan bilgileri tek boyutlu bir dizide
//tutulmak istenmektedir.
//a) Bu iþlem için kullanýlmasý gereken yapýyý 10 oyuncu için oluþturduktan sonra her bir oyuncunun adýný
//ve yaþ bilgisini kullanýcýdan alýp, puan bilgisini de 0-1000 arasý rastgele sayýlardan üretiniz .
//b) PuanGoster isimli bir fonksiyon yazýlacaktýr. Bu fonksiyon oyuncu
// bilgilerini alacak ve oyun puaný
//500’den fazla olan oyuncularýn isim, yaþ ve kazandýðý puan bilgilerini ekrana yazdýracaktýr
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
