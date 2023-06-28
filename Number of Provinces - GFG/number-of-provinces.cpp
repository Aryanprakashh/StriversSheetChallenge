//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
  
  void dfs(int vertex,vector<int> graph[],int visited[]){
        visited[vertex]=1; 
       for(int i:graph[vertex]){
           if(visited[i]==1) continue;
           
           dfs(i,graph,visited);
       }
  }
  
    int numProvinces(vector<vector<int>> adj, int V) {
        // code here
        vector<int> graph[V];
        // list to matrix
        for(int i=0;i<V;i++){
            for(int j=0;j<V;j++){
                if(adj[i][j]==1 and i!=j){
                    graph[i].push_back(j);
                    graph[j].push_back(i);
                }
            }
        }
        int visited[V]={0};
        int count=0;
        for(int i=0;i<V;i++){
            if(visited[i]==1) continue;
            
            count++;
            dfs(i,graph,visited);
        }
        return count;
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int V,x;
        cin>>V;
        
        vector<vector<int>> adj;
        
        for(int i=0; i<V; i++)
        {
            vector<int> temp;
            for(int j=0; j<V; j++)
            {
                cin>>x;
                temp.push_back(x);
            }
            adj.push_back(temp);
        }
        

        Solution ob;
        cout << ob.numProvinces(adj,V) << endl;
    }
    return 0;
}
// } Driver Code Ends