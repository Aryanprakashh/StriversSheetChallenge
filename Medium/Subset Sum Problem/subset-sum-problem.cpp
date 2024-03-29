//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function template for C++

class Solution{   
public:
int func(int ind,vector<int> &arr,int target,vector<vector<int>> &dp){
    if(ind==0) return target==arr[0];
    if(target==0) return 1;
    
    if(dp[ind][target]!=-1) return dp[ind][target];
    
    int nottake=func(ind-1,arr,target,dp);
    
    int take=0;
    if(target>=arr[ind])
        take=func(ind-1,arr,target-arr[ind],dp);
    
    return dp[ind][target]=take+nottake;

}
    bool isSubsetSum(vector<int>arr, int sum){
        // code here 
        int n=arr.size();
        vector<vector<int>> dp (n,vector<int>(sum+1,-1));
        return func(n-1,arr,sum,dp);
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N, sum;
        cin >> N;
        vector<int> arr(N);
        for(int i = 0; i < N; i++){
            cin >> arr[i];
        }
        cin >> sum;
        
        Solution ob;
        cout << ob.isSubsetSum(arr, sum) << endl;
    }
    return 0; 
} 

// } Driver Code Ends