//https://practice.geeksforgeeks.org/problems/search-an-element-in-an-array-1587115621/1/?category[]=Arrays&category[]=Arrays&difficulty[]=-1&page=2&query=category[]Arraysdifficulty[]-1page2category[]Arrays
//Given an integer array and another integer element. 
//The task is to find if the given element is present in array or not.

#include<stdio.h>


 // } Driver Code Ends
//User function Template for C

int search(int arr[], int N, int X)
{
        
    // Your code here
    for(int i=0;i<N;i++){
        if(arr[i]==X){
            return i;
        }
    }
    return -1;
}


// { Driver Code Starts.

int main()
{
    int testcases;
    scanf("%d", &testcases);
    while(testcases--)
    {
        int sizeOfArray;
        scanf("%d", &sizeOfArray);
        int arr[sizeOfArray];
        int x;
        
        for(int i=0;i<sizeOfArray;i++)
        {
            scanf("%d", &arr[i]);
        }
        scanf("%d", &x);
        printf("%d\n", search(arr,sizeOfArray,x)); //Linear search
    }

    return 0;
    
}
