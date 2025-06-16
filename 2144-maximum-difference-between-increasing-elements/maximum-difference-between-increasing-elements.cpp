class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        if(is_sorted(nums.rbegin(),nums.rend())){
            return-1;
        }
        int maxi=INT_MIN;
        int mini=nums[0];
        int n=nums.size();
        for(int i=1;i<n;i++){
            if(nums[i]>mini){
                maxi=max(maxi,abs(nums[i]-mini));
            }
            mini=min(nums[i],mini);
        }
        return maxi;
    }
};