class Solution {
public:

    bool check(int i,vector<int> &vis,vector<int> &arr){
        if(i<0 or i>=arr.size() or vis[i]) return false;
        if(arr[i]==0) return true;
        vis[i]=1;
        return check(i+arr[i],vis,arr)|| check(i-arr[i],vis,arr);
    }
    bool canReach(vector<int>& arr, int start) {
        int n=arr.size();
        vector<int> vis(n,0);
        return check(start,vis,arr);
    }
};