#include<iostream>
using namespace std;
void printPat(int n);
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
	cin>>n;
	printPat(n);
	cout<<endl;
	}
	
}
	

void printPat(int n)
{
//Your code here
 
for(int i=n;i>0;i--){
  for(int j=n;j>0;j--){
    for(int z=i;z>0;z--){
    cout<<j;

    }
  }
cout<<	"$";
}
}
