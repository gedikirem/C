//b) PuanGoster isimli bir fonksiyon yazýlacaktýr. Bu fonksiyon oyuncu
// bilgilerini alacak ve oyun puaný
//500’den fazla olan oyuncularýn isim, yaþ ve kazandýðý puan bilgilerini ekrana yazdýracaktýr
void PuanGoster(struct Oyuncu dizi[]){
printf("Puani 500'den fazla olan oyuncular:\n");
int i;
for(i=0;i<10;i++){
if(dizi[i].puan>=500){
printf("Oyuncu adi:%s Yas:%d puan:%d \n",dizi[i].isim,dizi[i].yas,dizi[i].puan);
}
}
}

