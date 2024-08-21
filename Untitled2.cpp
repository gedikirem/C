//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{
  public:	
  //Küme mantýðý
  //eleman sayýsýný bul
  //kesiþim sayýsýný çýkart
	int distinctSubsequences(string s)
	{
	    int n=s.length();
	    int sonuc=1;
//	    for(int i=0;i<n;i++){
//	        sonuc=sonuc*2;
//	    }
	    for(int i=0;i<n;i++){
	    	cout<<s[i]+s[i+1];
		}
	  //  return sonuc;
	}
};

//{ Driver Code Starts.

int main() 
{
   	

   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string s;
   		cin >> s;

        Solution ob;
		cout << ob.distinctSubsequences(s) << "\n";
   	}

    return 0;
}
// } Driver Code Ends
