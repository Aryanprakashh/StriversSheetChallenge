class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n=grid.size();
        unordered_map<int,int> mp;
        // int sum=0;
        for(auto i:grid){
            for(auto j:i){
                mp[j]++;
            }
        }
        int miss=0,rep=0;
        for(int i=1;i<=n*n;i++){
            if(mp.find(i)==mp.end()){
                miss=i;
            }
            if(mp[i]==2) rep=i;
                
        }
        vector<int> t={rep,miss};
        return t;
    }
};