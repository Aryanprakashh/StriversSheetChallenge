class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum=accumulate(nums.begin(),nums.end(),0);
        int s=nums.size();
        s=s*(s+1)/2;
        return abs(s-sum);
    }
};