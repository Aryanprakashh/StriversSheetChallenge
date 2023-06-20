class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        vector<int> ans;
        ans.push_back(0);
        for(int i=0;i<gain.size();i++){
            int res=ans.back()+gain[i];
            ans.push_back(res);
        }
        return *max_element(ans.begin(),ans.end());
    }
};