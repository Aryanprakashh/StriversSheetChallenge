class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        int n=nums.size();
        unordered_set<int> s;
        int sum=0,maxi=INT_MIN;
        int j=0;
        for(int i=0;i<n;i++){
            while(s.count(nums[i])){
                s.erase(nums[j]);
                sum-=nums[j];
                j++;
            }
            s.insert(nums[i]);
            sum+=nums[i];
            maxi=max(maxi,sum);
        }
        return maxi;
    }
};