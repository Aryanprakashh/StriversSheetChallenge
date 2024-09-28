class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        unordered_map<int,bool> mp;
        for(auto i:nums){
            mp[i]=true;
        }
        int n=nums.size();
        for(int i=1;i<=n+1;i++){
            if(mp.find(i)==mp.end()){
                return i;
            }
        }
        return -1;
    }
};