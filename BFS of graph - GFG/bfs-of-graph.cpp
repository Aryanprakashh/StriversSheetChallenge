//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
  void bfs(int vertex,vector<int> graph[],vector<int> &visited,vector<int> &ans){
      queue<int> q;
      q.push(vertex);
      visited[vertex]=1;
      while(!q.empty()){
          int curr_ver=q.front();
            ans.push_back(curr_ver);
          q.pop();
          for(auto &i:graph[curr_ver]){
              if(visited[i]==1) continue;
              
              q.push(i);
              visited[i]=1;
          }
      }
  }
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        
        vector<int> ans;
        vector<int> visited(V,0);
        bfs(0,adj,visited,ans);
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >>

            E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            // 		adj[v].push_back(u);
        }
        // string s1;
        // cin>>s1;
        Solution obj;
        vector<int> ans = obj.bfsOfGraph(V, adj);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends