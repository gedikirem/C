//b) PuanGoster isimli bir fonksiyon yaz�lacakt�r. Bu fonksiyon oyuncu
// bilgilerini alacak ve oyun puan�
//500�den fazla olan oyuncular�n isim, ya� ve kazand��� puan bilgilerini ekrana yazd�racakt�r
void PuanGoster(struct Oyuncu dizi[]){
printf("Puani 500'den fazla olan oyuncular:\n");
int i;
for(i=0;i<10;i++){
if(dizi[i].puan>=500){
printf("Oyuncu adi:%s Yas:%d puan:%d \n",dizi[i].isim,dizi[i].yas,dizi[i].puan);
}
}
}

