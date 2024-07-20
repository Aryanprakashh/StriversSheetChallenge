class Solution {
public:
    vector<vector<int>> restoreMatrix(vector<int>& rowsum, vector<int>& colsum) {
        int n=rowsum.size();
        int m=colsum.size();
        vector<vector<int>> v(n,vector<int>(m,0));

        int i=0,j=0;
        while(i<n and j<m){
            v[i][j]=min(rowsum[i],colsum[j]);

            rowsum[i]-=v[i][j];
            colsum[j]-=v[i][j];

            if(rowsum[i]==0){
                i++;
            }
            if(colsum[j]==0) j++;
        }
        return v;
    }
};