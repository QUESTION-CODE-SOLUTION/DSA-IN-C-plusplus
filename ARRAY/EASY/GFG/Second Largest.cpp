//https://bit.ly/3B8cnzY
// Given an array Arr of size N, print second largest element from an array.
#include <iostream>
using namespace std;

 // } Driver Code Ends
//User function template for C++
class Solution{
public:	
	// Function returns the second
	// largest elements
	int print2largest(int arr[], int n) {
	    // code here
	    int first=INT_MIN,second=INT_MIN;
	    for(int i=0;i<n;i++){
	        if(arr[i]>first){
	            second = first;
	            first = arr[i];
	        }
	        if(arr[i]>second && arr[i]<first){
	            second = arr[i];
	        }
	    }
	    if(second==INT_MIN)return -1;
	    return second;
	}
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.print2largest(arr, n);
        cout << ans << "\n";
    }
    return 0;
}
