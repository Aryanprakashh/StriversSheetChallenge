//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    // Function to return a list containing the DFS traversal of the graph.
    void dfs(int start_vertex,vector<vector<int>> &graph,bool visited[],vector<int> &ans){
         visited[start_vertex]=true;
        
        for(int j:graph[start_vertex]){
            if(visited[j]) continue;
            
                ans.push_back(j);
                dfs(j,graph,visited,ans);
        }
    }
    
    
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        //we have to convert adjancy martix to list
        vector<vector<int>> graph;
        for(int i=0;i<V;i++){
            vector<int> a;
            a.push_back(i);
            for(int j:adj[i]){
                a.push_back(j);
            }
            graph.push_back(a);
        }
        bool visited[V]={false};
        vector<int> ans;
        ans.push_back(0);
        dfs(0,graph,visited,ans);
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        // string s1;
        // cin>>s1;
        Solution obj;
        vector<int> ans = obj.dfsOfGraph(V, adj);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends