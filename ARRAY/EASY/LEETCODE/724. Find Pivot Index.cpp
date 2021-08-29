//https://leetcode.com/problems/find-pivot-index/
class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        vector<int>suum;
        int x=-1;
        int o=0;
        for(int i=0;i<nums.size();i++ ){
            o=o+nums[i];
            suum.push_back(o);
        } 
            //2 3 2
        if(suum[0]==suum[suum.size()-1])
        {x=0;}
        
        else{
            for(int i=1;i<suum.size();i++)
            {
                if(suum[i-1]==suum[suum.size()-1]-suum[i])
                {return i;}
            }
        }return x;}
}; 
