//S�nav sorusu-1
//Kullan�c�dan al�nan bir say�n�n tam b�lenleri toplam�n�n say�n�n kendisine e�it olup olmad���n�
//ekrana yazd�ran program�n kodunu C dilinde yaz�n�z.
int main(){
int sayi,i,toplam=0;
printf("Bir sayi giriniz:");
scanf("%d",&sayi);
for(i=1;i<sayi;i++){
if(sayi%i==0){
toplam+=i;
}
}
if(toplam==sayi){
printf("Esittir\n");
}
else{
printf("Esit degildir\n");
}
}
