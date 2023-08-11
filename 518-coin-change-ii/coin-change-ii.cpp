class Solution {
public:
vector<vector<int>> dp;
int func(int ind,vector<int> &coins,int amount){
        if(amount==0) return 1;

        if(ind < 0 || amount < 0 ) return 0;

        if(dp[ind][amount]!=-1) return dp[ind][amount];
        int notake=func(ind-1,coins,amount);
        int take=func(ind,coins,amount-coins[ind]);
        return dp[ind][amount]=take+notake;
    }
    int change(int amount, vector<int>& coins) {
        dp.resize(coins.size()+1,vector<int>(amount+1,-1));
        return func(coins.size()-1,coins,amount);
    }
};