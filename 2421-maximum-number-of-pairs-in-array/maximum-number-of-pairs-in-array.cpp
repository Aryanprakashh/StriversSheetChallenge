class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(auto i:nums){
            mp[i]++;
        }      

        int pair = 0, leftover = 0;
        for(auto i : mp) {
            pair += i.second / 2;  // Count the number of pairs
            leftover += i.second % 2;  // Count the leftovers
        }
        return {pair, leftover};
    }
};
