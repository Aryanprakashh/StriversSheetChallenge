class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> m;
        for(auto it:nums){
            m[it]++;
        }
        int size=nums.size()/3;
        int ans=0;
        for(auto it:m){
            if(it.second>=size){
                ans= it.first;
                size=it.second;
            }
        }
        return ans;
    }
};