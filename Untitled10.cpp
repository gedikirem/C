//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution
{
	public:
	//A ve B yi kar��la�t�r
	//hangisi b�y�kse
	//1 den o say�yay kadar git
	//enb=0 tan�mla
	//e�er d�g�deki say� her iki say�y�da b�l�y�rsa enb=i ata
	//return
    int gcd(int A, int B) 
	{ 
	  int enb=0,n=0;
	  
	  if(A>B){
	      n=A;
	  }
	  else if(B>A){
	      n=B;
	  }
	  else
	  {
	      n=A;
	  }
	   for(int i=1;i<=n;i++){
	          if(A%i==0 && B%i==0){
	              enb=i;
	          }
	      }
	       return enb;


	 
}
};

//{ Driver Code Starts.

int main() 
{
   	int t;
    cin >> t;
    while (t--)
    {
        int A, B;
        cin >> A >> B;
        Solution ob;
       	cout <<  ob.gcd(A, B) << "\n";
    }
    return 0;
}
// } Driver Code Ends
