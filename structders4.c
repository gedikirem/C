
#include<stdio.h>
#define pi 3.14
struct koordinat{
	int x;
	int y;
};
struct daire{
	int yaricap;
	struct koordinat k;	
};
//void daireciz(int yaricap,int x,int y){
//	printf("yariçap=%d x=%d y=%d",yaricap,x,y)
void daireciz(struct daire d){	
	printf("yaricap=%d x=%d y=%d\n",d.yaricap,d.k.x,d.k.y);
	float cevre=2*pi*d.yaricap;
	printf("Dairenin Cevresi:%f\n",cevre);
	float alan=pi*d.yaricap*d.yaricap;
	printf("Dairenin Alani:%f",alan);
}
int main(){
	struct daire daire;
	printf("Dairenin yaricapini giriniz:");
	scanf("%d",&daire.yaricap);
	printf("Dairenin olmasini istediginiz x konumunu giriniz:");
	scanf("%d",&daire.k.x);
	printf("Dairenin olmasini istediginiz y konumunu giriniz:");
	scanf("%d",&daire.k.y);
	daireciz(daire);
	struct koordinat k2;
	k2.x=8;
	k2.y=10;
}
