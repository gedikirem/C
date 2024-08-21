//2.soru dogru cözüm(kendi çözümüm)
int degistir(int sayilar[],int sayi){
int i;
printf("Dizinin son hali:\n");
for(i=0;i<7;i++){
	if(sayilar[i]==sayi){
	
		sayilar[i]=-1;
		printf("%d,",sayilar[i]);}
		else if(sayilar[i]!=sayi){
		printf("%d,",sayilar[i]);
	}	

}
	printf("\n");
}
int main(){
int sayilar[]={1,6,5,2,1,4,2};
int sayi,i,b=0;
for(i=0;i<=7;i++){
	if(sayilar[i]!=-1){
		b++;
printf("lutfen bir sayi giriniz:\n");
scanf("%d",&sayi);
degistir(sayilar,sayi);	

}}
printf("sonuc=%d farkli sayi vardir",b);
}
