//https://bit.ly/3jfBV8k
//Given an array arr of integers of length N, the task is to find whether it’s possible to construct an integer using
//all the digits of these numbers such that it would be divisible by 3. If it is possible then print “1” and if not print “0”.

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int isPossible(int N, int arr[]){
        // code here
        int sum=0;
        for(int i=0;i<N;i++){
            sum+=arr[i];
        }
        if(sum%3==0)return 1;
        return 0;
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int arr[N];
        for(int i = 0; i < N; i++)
            cin>>arr[i];
        
        Solution ob;
        cout<<ob.isPossible(N, arr)<<endl;
    }
    return 0;
}
