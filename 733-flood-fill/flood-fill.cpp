class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        vector<vector<int>> ans=image;

        int inicolor=image[sr][sc];
        int delrow[]={-1,0,1,0};
        int delcol[]={0,1,0,-1};

        int n=image.size();
        int m=image[0].size();
        dfs(sr,sc,ans,image,color,delrow,delcol,inicolor);
        return ans;
    }

    void dfs(int row,int col,vector<vector<int>> &ans,vector<vector<int>> &image,int color,int delrow[],int delcol[],int inicolor){
       
        ans[row][col]=color;
        int n=image.size();
        int m=image[0].size();

        for(int i=0;i<4;i++){
            int nrow=row+delrow[i];
            int ncol=col+delcol[i];

            if(nrow>=0 and nrow<n and ncol>=0 and ncol<m and image[nrow][ncol]==inicolor and ans[nrow][ncol]!=color){
                dfs(nrow,ncol,ans,image,color,delrow,delcol,inicolor);
            }
        }
    }
};