//https://leetcode.com/problems/pascals-triangle/
class Solution {
public:
    vector<vector<int>> generate(int numrows) {
        vector<vector<int>>vec;
        
        for(int i=0;i<numrows;i++){
            
            
            
            vector<int>n(i+1,1);
            
            for(int j=1;j<i;j++){
                
                int ele=vec[i-1][j-1]+vec[i-1][j];
                
                n[j]=ele;
            }
            vec.push_back(n);
        }
        return vec;
    }
};


    
