class Solution {
public:
void f(vector<int> candidates,int target,vector<vector<int>> &res,vector<int> &ans,int sum,int currindex){
    if(sum==target){
        res.push_back(ans);
        return;
    }
    if(sum>target) return;

    for(int i=currindex;i<candidates.size();i++){
        ans.push_back(candidates[i]);
        // sum+=candidates[i];

        f(candidates,target,res,ans,sum+candidates[i],i);
        ans.pop_back();
        // sum-=candidates[i];
    }


}
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
    vector<int> ans;
    vector<vector<int>> res;
    f(candidates,target,res,ans,0,0);
    return res;
    }
};