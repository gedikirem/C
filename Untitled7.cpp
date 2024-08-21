//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    //dizideki her elemaný dolaþ
    //her elemanýn karakter sayýsýný bul
    //uzunluk dizisine at
    //Bunlar içinde en uzunu bul
    string longest(string names[], int n)
    {
        int a=0;
        string name;
        int arr[n];
    for(int i=0;i<n;i++){
      
      //  cout<<names[i];
      name=names[i];
      for(int j=0;j<name[j]!=NULL;j++){
	
       a++;
         }
           // cout<<a; 
            arr[i]=a;
            a=0;
    }
    int enb=arr[0],c=0;
    for(int i=0;i<n;i++){
    	if(arr[i+1]>enb){
    		enb=arr[i+1];
    		c++;
		}
	}
	 return names[c];

    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		string names[n];
		
		for(int i=0;i<n;i++)
			cin>>names[i];
		Solution ob;
		cout<< ob.longest(names, n) << endl;
	}
}

// } Driver Code Ends
