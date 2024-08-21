 #include<stdio.h>
 
 //recursive ile girilen kelimeyi tersten yazdir
void yazdir(char dizi[],int n){
if(n<0)
return ;
printf("%c",dizi[n]);
yazdir(dizi,n-1);
}
main(){
	char kelime[]="programlama";
	yazdir(kelime,10);

}

