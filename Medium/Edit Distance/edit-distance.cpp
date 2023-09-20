//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
  int solve(string a,string b,int n,int m,vector<vector<int>> &dp){
    if(n==0) return m;
    if(m==0) return n;
    if(dp[n][m]!=-1) return dp[n][m];
    if(a[n-1]==b[m-1]) return solve(a,b,n-1,m-1,dp);
    else{
        return dp[n][m]=1+min(min(solve(a,b,n-1,m,dp),solve(a,b,n,m-1,dp)),solve(a,b,n-1,m-1,dp));
    }
     
}
    int editDistance(string word1, string word2) {
        // Code here
         int n=word1.size(),m=word2.size();
        vector<vector<int>> dp(n+1,vector<int>(m+1,-1));
        return solve(word1,word2,n,m,dp);
    }
};

//{ Driver Code Starts.
int main() {
    int T;
    cin >> T;
    while (T--) {
        string s, t;
        cin >> s >> t;
        Solution ob;
        int ans = ob.editDistance(s, t);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends