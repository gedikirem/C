//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
 
// Driver program to test above function

// } Driver Code Ends
class Solution{
  public:
    /*you are required to complete this method*/
    //Dizinin ka� basamakl� oldu�unu bul
    //say�n�n basamaklar�n� diziye at 
    //T�m diziyi dola�
    //0 buldu�un yere 5 yaz
    int convertFive(int n)
    {
        
   int sayi=n,b=0;
   while(n>0){
       n=n/10;
       b++;
   }
   int c=0,arr[b],d=b;
   for(int i=0;i<b;i++){
   	  
   	  cout<<arr[i]<<"\n";
   	   arr[i]=c;
       c=sayi%10;
       sayi=sayi/10;
       
   }
   
   for(int i=0;i<b;i++){
   	
       if(arr[i]==0){
           arr[i]=5;
       }
     
   }

  
   
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
