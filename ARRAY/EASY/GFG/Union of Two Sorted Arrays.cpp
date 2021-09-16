//https://practice.geeksforgeeks.org/problems/union-of-two-sorted-arrays-1587115621/1/?category[]=Arrays&category[]=Arrays&difficulty[]=0&page=2&query=category[]Arraysdifficulty[]0page2category[]Arrays

// Union of two arrays can be defined as the common and distinct elements in the two arrays.
// Given two sorted arrays of size n and m respectively, find their union.

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    //arr1,arr2 : the arrays
    // n, m: size of arrays
    //Function to return a list containing the union of the two arrays. 
    vector<int> findUnion(int arr1[], int arr2[], int n, int m)
    {
        //Your code here
        //return vector with correct order of elements
        vector<int>final;
        int prev;
        final.push_back(arr1[0]);
        prev=arr1[0];
        for(int i=1;i<n;i++){
            //if(find(final.begin(),final.end(),arr1[i])==final.end()){
            //    final.push_back(arr1[i]);
            //}
            if(arr1[i]!=prev){
                prev=arr1[i];
                final.push_back(arr1[i]);
            }
            
        }
        for(int j=0;j<m;j++){
                final.push_back(arr2[j]);
        }
        sort(final.begin(),final.end());
        vector<int>k;
        k.push_back(final[0]);
        int pre=final[0];
        for(int z=1;z<final.size();z++){
           if(final[z]!=pre){
               pre=final[z];
               k.push_back(final[z]);
           }
        }
        return k;
    }
};

// { Driver Code Starts.

int main() {
	
	int T;
	cin >> T;
	
	while(T--){
	    
	    
	    
	    int N, M;
	    cin >>N >> M;
	    
	    int arr1[N];
	    int arr2[M];
	    
	    for(int i = 0;i<N;i++){
	        cin >> arr1[i];
	    }
	    
	    for(int i = 0;i<M;i++){
	        cin >> arr2[i];
	    }
	    Solution ob;
	    vector<int> ans = ob.findUnion(arr1,arr2, N, M);
	    for(int i: ans)cout<<i<<' ';
	    cout << endl;
	    
	}
	
	return 0;
}  // } Driver Code Ends
