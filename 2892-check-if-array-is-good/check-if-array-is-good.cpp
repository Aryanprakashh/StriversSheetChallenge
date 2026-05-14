class Solution {
public:
    bool isGood(vector<int>& nums) {
        int len=nums.size();
        unordered_map<int,int> mp;
        for(auto i: nums){
            mp[i]++;
        }
            if(mp[len-1]!=2) return false;
            for(auto i:nums){
                if(i>len-1 or (i!=len-1 and mp[i]>1)) return false;
            }
        return true;
    }
};