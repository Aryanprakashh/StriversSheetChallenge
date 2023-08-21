class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) {
        vector<int> ans;
        unordered_map<int,int> mp;
        for(auto i:nums){
            for(auto j:i){
                mp[j]++;
                if(mp[j]==nums.size()) ans.push_back(j);
            }
        }
    if(ans.empty()){
        return {};
    }
    sort(ans.begin(),ans.end());
    return ans;
    }
};