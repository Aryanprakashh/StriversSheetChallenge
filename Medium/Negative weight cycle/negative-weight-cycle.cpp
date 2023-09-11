//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
	int isNegativeWeightCycle(int n, vector<vector<int>>edges){
	    // Code here
	   // vector<int> vis(n,-1);
	    vector<int> dis(n,1e8);
	   // int v=edges.size();
	   if(edges.size() == 0){
        return 0;
        }
	    for(int i=0;i<n-1;i++){
	        dis[i]=0;
	       for(auto &adj:edges){
    	       int u=adj[0];
    	       int v=adj[1];
    	       int wt=adj[2];
	            
	            if(dis[u]!=1e8 and (dis[u]+wt)<dis[v]){
	                dis[v]=dis[u]+wt;
	            }
	       }
	    }
	    for(auto &i:edges){
	        int u=i[0];
	        int v=i[1];
	        int wt=i[2];
	        
	        if(dis[u]!=1e8 and dis[u]+wt<dis[v]) return 1;
	    }
	    return 0;
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<int>>edges;
		for(int i = 0; i < m; i++){
			int x, y, z;
			cin >> x >> y >> z;
			edges.push_back({x,y,z});
		}
		Solution obj;
		int ans = obj.isNegativeWeightCycle(n, edges);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends