class Solution {
public:
    int n, m;
    void dfs(int sr, int sc, int inicolor, vector<vector<int>>& image,
             int color, vector<vector<int>>& ans,int delrow[],int delcol[]) {
        ans[sr][sc] = color;
        for (int i = 0; i < 4; i++) {
            int nrow = sr + delrow[i];
            int ncol = sc + delcol[i];

            if (nrow >= 0 and nrow < n and ncol >= 0 and ncol < m and
                image[nrow][ncol] == inicolor and ans[nrow][ncol] != color) {
                dfs(nrow, ncol, inicolor, image, color, ans,delrow,delcol);
            }
        }
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc,
                                  int color) {
        n = image.size();
        m = image[0].size();
        int delrow[] = {-1, 0, 1, 0};
        int delcol[] = {0, 1, 0, -1};
        vector<vector<int>> ans = image;
        if (image[sr][sc] == color)
            return image;
        int inicolor = image[sr][sc];
        dfs(sr, sc, inicolor, image, color, ans,delrow,delcol);
        return ans;
    }
};