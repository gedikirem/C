//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
 
// Driver program to test above function

// } Driver Code Ends
class Solution{
  public:
    /*you are required to complete this method*/
    //Dizinin kaç basamaklý olduðunu bul
    //sayýnýn basamaklarýný diziye at 
    //Tüm diziyi dolaþ
    //0 bulduðun yere 5 yaz
    int convertFive(int n)
    {
        
   int sayi=n,b=0;
   while(n>0){
       n=n/10;
       b++;
   }
   int c=0,arr[b];
   for(int i=0;i<b;i++){
       c=sayi%10;
       if(c!=b){
       	 arr[i]=c;
	   }
     
	 cout<<arr[i]<<"\n";
	 
      
       sayi=sayi/10;
   }
//     for(int i=0;i<b;i++){
//      cout<<arr[i];
//    
//   }
   
   
   for(int i=0;i<b;i++){
       if(arr[i]==0){
           arr[i]=5;
       }
    
   }
 
//     for(int i=0;i<b;i++){
//       if(arr[i]!=b){
//       	   cout<<arr[b-i-1];   
//	   }
//   }
  
   
//   return arr;
    
    }
};

//{ Driver Code Starts.
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
    	int n;
    	cin>>n;
    	Solution obj;
    	cout<<obj.convertFive(n)<<endl;
    }
}
// } Driver Code Ends
