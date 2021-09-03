// https://practice.geeksforgeeks.org/problems/rotate-array-by-n-elements/0/?category[]=Arrays&category[]=Arrays&difficulty[]=-1&page=1&query=category[]Arraysdifficulty[]-1page1category[]Arrays
//Given an unsorted array arr[] of size N, rotate it by D elements (clockwise). 

// Input:
// The first line of the input contains T denoting the number of testcases. 
// First line of each test case contains two space separated elements, 
// N denoting the size of the array and an integer D denoting the number size of the rotation. 
//   Subsequent line will be the N space separated array elements.

#include <iostream>
using namespace std;


int main() {
	int t, n, d;
	cin>>t;
	while(t--){
	    cin>>n>>d;
	    int arr[n];
	    for(int i=0; i<n; i++){
	        cin>>arr[(i+n-d)%n];
	    }
	    for(int i=0; i<n; i++){
	        cout<<arr[i]<<" ";
	    }
	    cout<<endl;
	}
	
	return 0;
}
