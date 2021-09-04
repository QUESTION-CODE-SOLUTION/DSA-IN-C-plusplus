//https://bit.ly/38fGr0j
//Given a number N. Your task is to check whether it is fascinating or not.
// Fascinating Number: When a number(should contain 3 digits or more) is multiplied by 2 and 3 
//   ,and when both these products are concatenated with the original number, 
// then it results in all digits from 1 to 9 present exactly once.

#include <bits/stdc++.h>

using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution{
public:
	
	bool fascinating(int n) {
	    // code here
	    string num = to_string(n);
	    string two = to_string(n*2);
	    string three = to_string(n*3);
	    num += two;
	    num += three;
	    sort(num.begin(),num.end());
	    int z = 1;
	    if(num=="123456789"){
	        return true;
	    }
	    return false;
	}
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        auto ans = ob.fascinating(n);
        if (ans) {
            cout << "Fascinating\n";
        } else {
            cout << "Not Fascinating\n";
        }
    }
    return 0;
}
