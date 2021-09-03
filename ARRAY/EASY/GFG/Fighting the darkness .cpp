//https://practice.geeksforgeeks.org/problems/fighting-the-darkness3949/1/?category[]=Arrays&category[]=Arrays&difficulty[]=-1&page=1&query=category[]Arraysdifficulty[]-1page1category[]Arrays
// Given an array arr[] of size N representing the size of candles which reduce by 1 unit each day. 
// The room is illuminated using the given N candles. 
//   Find the maximum number of days the room is without darkness.
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution{   
public:
    int maxDays(int arr[],int n){
        // code here
        int max = 0;
        for(int i=0; i<n; i++){
            if(arr[i]>max){
                max = arr[i];
            }
        }
        return max;
    }
};

// { Driver Code Starts.

int main() 
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        Solution ob;
        cout << ob.maxDays(arr, n) << "\n";
    }
    return 0;
}
