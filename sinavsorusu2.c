//S�nav sorusu-2
//1�den 9�a kadar olan say�lar�, her say�n�n karesini
// ve her say�n�n fakt�riyelini bulup 9x3 boyutunda
//bir matrise yerle�tiren program� yaz�n�z. 
//Fakt�riyel bulma i�lemi ayr� bir fonksiyon kullan�larak
//yaz�lacakt�r. (�lk s�tunda say�, ikinci s�tunda karesi,
 //���nc� s�tunda say�n�n fakt�riyeli olmal�d�r.)
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

