
  //{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
	public:
		
	void swap(int* a, int* b)
    {
    int temp = *a;
    *a = *b;
    *b = temp;
     }
     

		
		
		int find_median(vector<int> v)
		{
		    // Code here.
	    int min;
		for(int i=0;i<v.size()-1;i++){
				min=i;
			if(i==v.back()){	
			 	break;
			 }
			 
			for(int j=i+1;j<v.size();j++){
			if(v[min]>v[j]){
				min=j;
			}
		}
		swap(&v[min],&v[i]); 
		//	 cout << v.operator[](i);
	
		}
      // return enk;
      for(int a=0;a<v.size();a++){
		//cout << v.operator[](a);
		int med=(a+v.size())/2;

		if(v.size()%2!=0){
			return v.operator[](med);
		}
			else{
		  return (v.operator[](med-1)+v.operator[](med))/2;
		}
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
    	vector<int> v(n);
    	for(int i = 0; i < n; i++)
    		cin>>v[i];
    	Solution ob;
    	int ans = ob.find_median(v);
    	cout << ans <<"\n";
    }
	return 0;
}

// } Driver Code Ends
