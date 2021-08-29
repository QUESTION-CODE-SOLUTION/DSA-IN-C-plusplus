class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int s1=nums1.size(),s2=nums2.size();
        int z1=s1-m;
        for(int i=1;i<=z1;i++)
        {
            nums1.pop_back();
        }
        for(int i=0;i<n;i++)
        {
            nums1.push_back(nums2[i]);
        }
        sort(nums1.begin(),nums1.end());
        
    }
};
