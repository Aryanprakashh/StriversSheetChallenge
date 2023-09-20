class Solution {
public:
int solve(int ind,int amount,vector<int> &coins,vector<vector<int>> &dp){
    if(ind==0) {
        return (amount%coins[0]==0);
    }
    // if(amount==0) return 1;
    if(dp[ind][amount]!=-1) return dp[ind][amount];

    int nottake=solve(ind-1,amount,coins,dp);
    int take=0;
    if(coins[ind]<=amount){
        take+=solve(ind,amount-coins[ind],coins,dp);
    }
    return dp[ind][amount]=take+nottake;
}
    int change(int amount, vector<int>& coins) {
        int n=coins.size();
        vector<vector<int>> dp(n+1,vector<int>(amount+1,-1));
        return solve(n-1,amount,coins,dp);
    }
};