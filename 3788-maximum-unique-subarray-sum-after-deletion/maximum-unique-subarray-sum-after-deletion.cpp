class Solution {
public:
    int maxSum(vector<int>& nums) {
        unordered_set<int> s;
        int ans=0;
        for(auto i:nums){
            s.insert(i);
        }
        for(auto i:s){
            if(i>0) ans+=i;
        }
        int x=*max_element(nums.begin(),nums.end());
        if(x<0) return x;
        else return ans;
    }
};