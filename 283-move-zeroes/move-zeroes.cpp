class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int zero=0,nzero=0;
        vector<int> ans;
        for(auto i:nums){
            if(i==0) zero++;
            else ans.push_back(i);
        }
        while(zero--){
            ans.push_back(0);
        }
        nums=ans;
    }
};