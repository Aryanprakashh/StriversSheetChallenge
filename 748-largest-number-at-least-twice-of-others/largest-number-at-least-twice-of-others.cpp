class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int lar=*max_element(nums.begin(),nums.end());
        int ind=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=lar and nums[i]*2>lar) return -1;
            if(lar==nums[i]) ind=i;
        }
        return ind;
    }
};