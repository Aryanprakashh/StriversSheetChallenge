class Solution {
public:
    int missingNumber(vector<int>& nums) {
        // sort(nums.begin(),nums.end());
        unordered_map<int,int> mp;
        int n=nums.size();
        for(auto i:nums){
            mp[i]++;
        }
        for(int i=0;i<=n;i++){
            if(mp.find(i)==mp.end()){
                return i;
            }
        }
        return -1;
    }
};