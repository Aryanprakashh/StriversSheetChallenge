class Solution {
public:
    bool canSortArray(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<n;i++){
            for(int j=0;j<n-i-1;j++){
                int bit1=__builtin_popcount(nums[j]);
                int bit2=__builtin_popcount(nums[j+1]);

                if(bit1==bit2 and nums[j]>nums[j+1]) 
                swap(nums[j],nums[j+1]); 
            }
        }
        return is_sorted(nums.begin(),nums.end());
    }
};