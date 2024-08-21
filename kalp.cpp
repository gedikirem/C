
#include <iostream>
#include <windows.h>
using namespace std;
int main()
{

int x;
int y;
int i;

for (y = 1;y<=3;y++){
for(int i=1;i<=2;i++)
{
for(x=1;x<=(3-y);x++)
cout<<" ";
for(x=1;x<=y;x++){
system("color 7C");
cout<<"\x3 ";}
for(x=1;x<=(3-y);x++)
cout<<" ";
}
cout<<"\n";
}
for (y=1;y<=5;y++){
for(i=1;i<=y;i++)
cout<<" ";
for(int j=1;j<=(6-y);j++){
system("color 7C");
cout<<"\x3 ";}
cout<<"\n";
}}
