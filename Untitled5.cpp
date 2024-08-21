//{ Driver Code Starts
//Initial Template for C++


#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution
{
	public:
		string is_palindrome(int n)
		{
		    // Code here.
		    int sayi=n,b=0;
		    while(n>0){
		        n=n/10;
		        b++;
		    }
		    int c=0;
		    int dizi[b];
		    for(int i=0;i<b;i++){
		     
		        c=sayi%10;
		        dizi[i]=c;
		        sayi=sayi/10;
		    }
		   
    	 int d=0;
         for(int j=0;j<b;j++){
           if(dizi[j]==dizi[b-1-j]){//tersten karþýlaþtýrma
             
           }
           else{
               d++;
           }

       }
 
		    if(d>0){
		        return  "No";
		    }
		    else{
		        return "Yes";
		    }
		}
};

//{ Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n;
    	cin >> n;
    	Solution ob;
    	string ans = ob.is_palindrome(n);
    	cout << ans <<"\n";
    }
	return 0;
}

// } Driver Code Ends

// } Driver Code Ends
