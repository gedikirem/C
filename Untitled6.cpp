//{ Driver Code Starts

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
	public:
		long long int reverse_digit(long long int n)
		{
		    // Code here
		    int sayi=n,b=0;
		    while(n>0){
		        n=n/10;
		        b++;
		    }
		     int arr[b];
		    int c=0;
		    for(int i=0;i<b;i++){
		        c=sayi%10;
		      
		     arr[i]=c;
		        sayi=sayi/10;
		        
		    }
		    
		   int *ptr;
		   ptr=arr;
		      for(int i=0;i<b;i++){
		      cout<< ptr[i];
		
		      }
		    
		}
};

//{ Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	long long int n;
    	cin >> n;
    	Solution ob;
    	long long int  ans = ob.reverse_digit(n);
    	cout << ans <<"\n";
    }
	return 0;
}
// } Driver Code Ends
