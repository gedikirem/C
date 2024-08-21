#include<stdio.h>

void OrtalamaHesapla(){
	FILE *file;
	int vize,final;
	int ortalama=0;
	//dosyamýzý okuma modunda açýyoruz
	file=fopen("Notlar1.txt","r+");
	//dosyadan verileri okuma ve hesaplama
	if(file!=NULL){
		while(fscanf(file,"%d %d",&vize,&final)==2){
			ortalama=(vize+final)/2;
			//Dosyanýn yazma konumunu bulma
			long int konum=ftell(file);
			//ilgili satýrýn sonuna ortalamayý yazdýrma
			fseek(file,konum,SEEK_SET);//SEEK_SET,SEKK_CUR,SEEK_END
			fprintf(file," %d \n",ortalama);
			
			//Dosyanýn konumuna tekrar geri taþýma iþlemi
			fseek(file,konum,SEEK_SET);
		}
			fclose(file);
		printf("Notlar1.txt dosyasi olusturuldu.\n");	
	}
	else{
		printf("Dosya olusturulamadi hatasi !!!!");
	
	}
	
}

int main(){
	FILE *file;
	int i,vize,final;
	file=fopen("Notlar1.txt","w");
	if(file!=NULL){
		for(i=0;i<2;i++){
			printf("%d.ogrencinin Vize notunu giriniz: ",i+1);
			scanf("%d",&vize);
			printf("%d.ogrencinin Final notunu giriniz: ",i+1);
			scanf("%d",&final);
			fprintf(file,"%d %d \n",vize,final);
		}
		fclose(file);
		printf("Ortalama hesapla fonksiyonu calisti.\n");	
		OrtalamaHesapla();
	}
	else{
		printf("Dosya olusturulamadi hatasi !!!!");
		return 1;
	}
	return 0;
}
