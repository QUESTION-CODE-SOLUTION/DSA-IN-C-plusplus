//questionlink
//https://leetcode.com/problems/move-zeroes/

class Solution {
public:
    void moveZeroes(vector<int>& nums)
    {   
        
        int c=0;
        int numssize=nums.size();
        
        for(int i=0;i<numssize;i++)
        {
            if(nums[i]!=0)
            {
                nums[c++]=nums[i];
                
            }
            
        }
        while(c<numssize)
        {
            nums[c++]=0;
            
        }
    
    }
};
