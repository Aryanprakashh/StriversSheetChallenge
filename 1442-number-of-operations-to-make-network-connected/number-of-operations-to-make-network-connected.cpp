class Solution {
public:
void dfs(int src,vector<int> adj[],vector<int> &vis){
    vis[src]=1;
    for(auto i:adj[src]){
        if(vis[i]==1) continue;

        dfs(i,adj,vis);
    }
}
    int makeConnected(int n, vector<vector<int>>& connections) {
        vector<int> adj[n];
        int len=connections.size();
        if(len<n-1) return -1;
        for(auto i:connections){
            adj[i[0]].push_back(i[1]);
            adj[i[1]].push_back(i[0]);
        }
        vector<int> vis(n,-1);
        int count=0;
        for(int i=0;i<n;i++){
            if(vis[i]==1) continue;

            dfs(i,adj,vis);
            count++;
        }
        return count-1;
    }
};