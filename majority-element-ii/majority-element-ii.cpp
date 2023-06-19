class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int size=nums.size()/3;
        vector<int> ans;
        unordered_map<int,int> m;
        for(auto it:nums){
            m[it]++;
        }
        // int ans=0;
        for(auto it:m){
            if(it.second>size){
                // size=it.second;
                ans.push_back(it.first);
            }
        }
        return ans;

    }
};