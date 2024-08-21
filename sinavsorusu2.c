//Sýnav sorusu-2
//1’den 9’a kadar olan sayýlarý, her sayýnýn karesini
// ve her sayýnýn faktöriyelini bulup 9x3 boyutunda
//bir matrise yerleþtiren programý yazýnýz. 
//Faktöriyel bulma iþlemi ayrý bir fonksiyon kullanýlarak
//yazýlacaktýr. (Ýlk sütunda sayý, ikinci sütunda karesi,
 //üçüncü sütunda sayýnýn faktöriyeli olmalýdýr.)
 int faktoriyel(int sayi){
int i,sonuc=1;
for(i=sayi;i>=1;i--){
sonuc=sonuc*i;
}
return sonuc;
}
int main(){
int A[9][3];
int i,j;
for(i=0;i<9;i++){
A[i][0]=i+1;
A[i][1]=(i+1)*(i+1);
A[i][2]=faktoriyel(i+1);
}
for(i=0;i<9;i++){
	for(j=0;j<3;j++){
		printf("%d ",A[i][j]);
	}
	printf("\n");
}
}

