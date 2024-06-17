class Solution {
public:
    bool judgeSquareSum(int c) {
        unordered_map<int,int> mp;

        for(int i=0;i<=sqrt(c);i++){
            mp[i*i]++;

            int rem=c-i*i;
            if(mp[rem]) return true;
        }
        return false;
    }
};