//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    bool IsPerfect(int a[],int n)
    {
        int d=0;
        
           for(int j=0;j<n;j++){
           if(a[j]==a[n-1-j]){
          
           }
           else{
               d++;
           }
           }
              
           if(d>0){
               return false;
           }
           else{
               return true;
           }
           
        }
        
};




//{ Driver Code Starts.
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        int a[n];
        
        for(int i=0;i<n;i++)
            cin>>a[i];
        Solution ob;
        if(ob.IsPerfect(a,n))
            cout<<"PERFECT\n";
        else
            cout<<"NOT PERFECT\n";
        
    }
    
}
// } Driver Code Ends
