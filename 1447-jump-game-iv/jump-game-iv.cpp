class Solution {
public:
    int minJumps(vector<int>& arr) {
        int n=arr.size();
        if(n==1) return false;

        unordered_map<int,vector<int>> graph;
        for(int i=0;i<n;i++){
            graph[arr[i]].push_back(i);
        }

        queue<int> q;
        vector<bool> vis(n,false);
        q.push(0);
        vis[0]=true;

        int cnt=0;
        while(!q.empty()){
            int size=q.size();
            while(size--){
                int idx=q.front();
                q.pop();
                if(idx==n-1) return cnt;
                if(idx-1>=0 and !vis[idx-1]){
                    vis[idx-1]=true;
                    q.push(idx-1);
                }

                if(idx+1<n and !vis[idx+1]){
                    vis[idx+1]=true;
                    q.push(idx+1);
                }

                if(graph.count(arr[idx])){
                    for(int nxt: graph[arr[idx]]){
                        if(!vis[nxt]){
                            vis[nxt]=true;
                            q.push(nxt);
                        }
                    }
                    graph.erase(arr[idx]);
                }
            }
            cnt++;
        }
        return -1;
    }
};