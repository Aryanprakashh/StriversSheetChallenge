//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    #define mod 1000000007
    public:
    //Function to count the number of ways in which frog can reach the top.
    long long ans(int n,vector<long long> &dp){
        if(n==0) return 0;
        if(n==1) return 1;
        if(n==2) return 2;
        if(n==3) return 4;
        
        if(dp[n]!=-1) return dp[n];
        return dp[n]=(ans(n-1,dp) + ans(n-2,dp) + ans(n-3,dp))%mod;
    }
    long long countWays(int n)
    {
        vector<long long> dp(n+1,-1);
        return ans(n,dp);
        // your code here
        
    }
};


//{ Driver Code Starts.
int main()
{
    //taking testcases
	int t;
	cin >> t;
	
	while(t--)
	{
	    //taking number of steps in stair
		int n;
		cin>>n;
		Solution ob;
		//calling function countWays()
		cout << ob.countWays(n) << endl;
	}
    
    return 0;
    
}

// } Driver Code Ends