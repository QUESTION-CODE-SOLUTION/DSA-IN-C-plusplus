//https://leetcode.com/problems/sort-array-by-parity/
// Given an integer array nums, move all the even integers at the beginning of the array followed by all the odd integers.

// Return class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
            if(nums[i]%2==0){
                ans.insert(ans.begin()+0,nums[i]);
            }
            else{
                ans.push_back(nums[i]);
            }
        }
        return ans;
    }
};
