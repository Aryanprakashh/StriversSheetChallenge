//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
const int mod=1e9+7;
	public:
	int func(int ind,int arr[],int target,vector<vector<int>> &dp){
	    if(ind==-1) return target==0%mod;
	   
	    if(dp[ind][target]!=-1) return dp[ind][target];
	    int notake=func(ind-1,arr,target,dp)%mod;
	    int take=0%mod;
	    if(arr[ind]<=target) 
	    take=func(ind-1,arr,target-arr[ind],dp);
	    return dp[ind][target]=((take)%mod+(notake)%mod)%mod;
	}
	int perfectSum(int arr[], int n, int sum)
	{
	    vector<vector<int>> dp(n+1,vector<int>(sum+1,-1));
        return func(n-1,arr,sum,dp);
	}
	  
};

//{ Driver Code Starts.
int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n, sum;

        cin >> n >> sum;

        int a[n];
        for(int i = 0; i < n; i++)
        	cin >> a[i];

       

	    Solution ob;
	    cout << ob.perfectSum(a, n, sum) << "\n";
	     
    }
    return 0;
}

// } Driver Code Ends