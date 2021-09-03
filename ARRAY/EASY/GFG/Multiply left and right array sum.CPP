// https://practice.geeksforgeeks.org/problems/multiply-left-and-right-array-sum1555/1/?category[]=Arrays&category[]=Arrays&difficulty[]=-1&page=1&query=category[]Arraysdifficulty[]-1page1category[]Arrays
// Pitsy needs help in the given task by her teacher. 
// The task is to divide a array into two sub array (left and right) containing n/2 
//   elements each and do the sum of the subarrays and then multiply both the subarrays.

#include <bits/stdc++.h>
using namespace std;

int multiply(int arr[], int n);


int main() {
	//code
	int t;
	cin>>t;
	while (t--)
	{
	    int n,sum1=0,sum2=0;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	    
	    cout << multiply(a, n) << endl;
	    
	}
	return 0;
}// } Driver Code Ends


//User function Template for C++

int multiply(int arr[], int n)
{
    // Complete the function
    int left=0,right=0,pro;
    for(int i=0;i<n/2;i++){
        left+=arr[i];
    }
    for(int j=n/2;j<n;j++){
        right+=arr[j];
    }
    pro=left*right;
    return pro;
}
