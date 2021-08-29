//https://leetcode.com/problems/remove-duplicates-from-sorted-array/
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
       
	nums.erase(unique(nums.begin() ,nums.end()),nums.end() ); 
	return nums.size() ;

        
    }
};
