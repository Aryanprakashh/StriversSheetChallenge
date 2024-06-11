class Solution {
public:

void dfs(int node,vector<int> &vis,vector<int> adj[]){
    vis[node]=1;

    for(auto i:adj[node]){
        if(!vis[i]){
            dfs(i,vis,adj);
        }
    }
}
    int findCircleNum(vector<vector<int>>& isConnected) {
        int V=isConnected[0].size();
        vector<int> adj[V];
        for(int i=0;i<V;i++){
            for(int j=0;j<V;j++){
                if(isConnected[i][j]==1 and i!=j){
                    adj[i].push_back(j);
                    adj[j].push_back(i);
                }
            }
        }
        vector<int> vis(V,0);
        int count=0;

        for(int i=0;i<V;i++){
            if(vis[i]) continue;

            count++;
            dfs(i,vis,adj);
        }
        return count;
    }
};