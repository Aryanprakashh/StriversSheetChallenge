class Solution {
public:
    int firstCompleteIndex(vector<int>& arr, vector<vector<int>>& mat) {
        int rowsize=mat.size();
        int colsize=mat[0].size();

        unordered_map<int,pair<int,int>> mp;
        vector<int> rowcnt(rowsize,0);
        vector<int> colcnt(colsize,0);

        for(int i=0;i<rowsize;i++){
            for(int j=0;j<colsize;j++){
                mp[mat[i][j]]={i,j};
            }
        }

        for(int i=0;i<arr.size();i++){
            int num=arr[i];

            auto [r,c]=mp[num];
            rowcnt[r]++;
            colcnt[c]++;

            if(rowcnt[r]==colsize || colcnt[c]==rowsize){
                return i;
            }
        }
        return -1;
    }
};