// https://practice.geeksforgeeks.org/problems/peak-element/1/?category[]=Arrays&category[]=Arrays&difficulty[]=0&page=2&query=category[]Arraysdifficulty[]0page2category[]Arrays
// A peak element in an array is the one that is not smaller than its neighbours.
// Given an array arr[] of size N, find the index of any one of its peak elements.
// Note: The generated output will always be 1 if the index that you return is correct. Otherwise output will be 0. 
//Initial Template for C

#include<stdio.h>
#include<stdbool.h>


 // } Driver Code Ends
//User function Template for C

int peakElement(int a[], int n)
{
   // Your code here
   if(a[0]>a[1]){
       return 0;
   }
   int i=1;
    while(i<n-1){
       if((a[i]>a[i-1])&&(a[i]>a[i+1])){
           return i;
       }
       i=i+2;
    }
    if(a[n-1]>a[n-2]){
         return n-1;
    }

   
}

// { Driver Code Starts.

int main() {
	int t;
	scanf("%d", &t);
	while(t--)
	{
		int n;
		scanf("%d", &n);
		int a[n], tmp[n];
		for(int i=0;i<n;i++)
		{
			scanf("%d", &a[i]);
			tmp[i] = a[i];
		}
		bool f=0;
		
		int A = peakElement(tmp,n);
		
		if(A<0 && A>=n)
		    printf("0\n");
		else
		{
		if(n==1 && A==0)
		f=1;
		else
		if(A==0 && a[0]>=a[1])
		f=1;
		else if(A==n-1 && a[n-1]>=a[n-2])
		f=1;
		else if(a[A]>=a[A+1] && a[A]>= a[A-1])
		f=1;
		else
		f=0;
		printf("%d\n", f);
		}
		
	}

	return 0;
}  // } Driver Code Ends
