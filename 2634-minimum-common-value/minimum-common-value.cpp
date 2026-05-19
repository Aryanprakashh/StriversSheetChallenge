class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        if(nums2.size()>nums1.size()){
            return getCommon(nums2,nums1);
        }
        for(auto i:nums1)
        if(binary_search(nums2.begin(),nums2.end(),i)){
            return i;
        }
return -1;
    }
};