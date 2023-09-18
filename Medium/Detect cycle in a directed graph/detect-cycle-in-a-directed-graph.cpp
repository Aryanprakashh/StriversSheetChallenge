//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// #include<vector>
class Solution {
  public:
  bool solve(int src, vector<int> adj[], vector<bool> &vis, vector<bool> &pathvis) {
    vis[src] = true;
    pathvis[src] = true;
    for (auto i : adj[src]) {
        if (!vis[i]) {
            if (solve(i, adj, vis, pathvis)) return true;
        } else if (pathvis[i]) return true;
    }
    pathvis[src] = false; 
    return false;
}

    // Function to detect cycle in a directed graph.
    bool isCyclic(int V, vector<int> adj[]) {
        // code here
        vector<bool> vis(V,false);
        vector<bool> pathvis(V,false);
        for(int i=0;i<V;i++){
            if(!vis[i])
            {
                if(solve(i,adj,vis,pathvis)) return true;
            }
        }
        return false;
    }
};

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int V, E;
        cin >> V >> E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
        }

        Solution obj;
        cout << obj.isCyclic(V, adj) << "\n";
    }

    return 0;
}

// } Driver Code Ends