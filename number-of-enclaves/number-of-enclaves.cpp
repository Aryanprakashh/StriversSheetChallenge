class Solution {
public:
    int numEnclaves(vector<vector<int>>& grid) 
    {
        int n = grid.size();
        int m = grid[0].size();

        vector <vector <int>> visited(n, vector <int> (m, 0));
        queue <pair <int, int>> q;
        
        for(int row = 0; row < n; row++)
        {
            for(int col = 0; col < m; col++)
            {
                if(row == 0 || row == n-1 || col == 0 || col == m-1)
                {
                    if(grid[row][col] == 1)
                    {
                        visited[row][col] = 1;
                        q.push({row, col});
                    }
                }
            }
        }

        int dx[4] = {-1, 0, 1, 0};
        int dy[4] = {0, 1, 0, -1};
        int count = 0;

        while(!q.empty())
        {
            int row = q.front().first;
            int col = q.front().second;
            q.pop();

            //now find out its corresponding neighbours
            // can move only in 4 directions.. i.e. left, right, up, down
            for(int i = 0; i < 4; i++)
            {
                int nRow = row + dx[i];
                int nCol = col + dy[i];

                //perform boundary check
                if(nRow >= 0 && nRow < n && nCol >= 0 && nCol < m && !visited[nRow][nCol] && grid[nRow][nCol] == 1)
                {
                    visited[nRow][nCol] = 1;
                    q.push({nRow, nCol});
                }
            }
        }

        for(int row = 0; row < n; row++)
        {
            for(int col = 0; col < m; col++)
            {
                if(visited[row][col] == 0 && grid[row][col])
                    count++;
            }
        }        
        return count;
    }
};