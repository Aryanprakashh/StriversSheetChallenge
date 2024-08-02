class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        int ans=0;
        long long sum=accumulate(nums.begin(),nums.end(),0LL);
        long long leftsum=0;
        for(int i=0;i<nums.size()-1;i++){
            leftsum+=nums[i];
            if(leftsum>=(sum-leftsum)) ans++;
        }
        return ans;
    }
};