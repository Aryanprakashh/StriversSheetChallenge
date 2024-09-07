class Solution {
public:
    int n,m;
void dfs(int i,int j,vector<vector<char>> &grid){
    if(i<0 or i>=n or j<0 or j>=m or grid[i][j]!='1') 
        return;
    
    if(grid[i][j]!='1') return;
    //visit the grid
    grid[i][j]='$';

    dfs(i+1,j,grid);
    dfs(i,j+1,grid);
    dfs(i-1,j,grid);
    dfs(i,j-1,grid);
}
    int numIslands(vector<vector<char>>& grid) {
        n=grid.size();
        m=grid[0].size();
        int island=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]=='1'){
                    dfs(i,j,grid);
                    island++;
                }
            }
        }
        return island;
    }
};