//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    //Tüm diziyi dolaþacak
    //"" gördüðü yere sonraki indesin elemanýný atayacak
    //o indiside sonraki elemaný atayacak
  public:
    string modify (string s)
    {
        //code here.
 //i r e m
 //s[0]=i;
 //s[1]=''; r=s[2]
 //s[2]=r; e =s[4]r 
 //s[3]=''; m=s[6]
 //s[4]=e;
 //s[5]='';
 //s[6]=m;
 
       
       return s;
	
        
      
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    cin.ignore ();
    while (t--)
    {
        string s;
        getline (cin, s);
        Solution ob;
        cout <<ob.modify (s) << endl;
    }
    return 0;
}

// Contributed By: Pranay Bansal

// } Driver Code Ends
