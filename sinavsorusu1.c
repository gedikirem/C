//Sýnav sorusu-1
//Kullanýcýdan alýnan bir sayýnýn tam bölenleri toplamýnýn sayýnýn kendisine eþit olup olmadýðýný
//ekrana yazdýran programýn kodunu C dilinde yazýnýz.
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
