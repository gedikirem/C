#include<iostream>
#include<vector>
#include<stdlib.h>
#include<time.h>
using namespace std;

int main(){
	int rast_sayi;
	vector<int> rastgele;
	for(int i=0;i<10;i++){
	rast_sayi=rand()%20 +1;// 1 le 20 aras�nda say� �retme
	rastgele.push_back(rast_sayi);
		
	}
	for(int i=0;i<rastgele.size();i++){
		cout<<rastgele[i]<<endl;
	}
return 0;
	
}
