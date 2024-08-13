class Solution {
public:
void f(vector<int> candi,int target,vector<vector<int>> &res,vector<int> ans,int sum,int currindex){
    if(sum==target){
        res.push_back(ans);
        return;
    }

    if(sum>target) return ;

    for(int i=currindex;i<candi.size();i++){
        if(i>currindex and candi[i]==candi[i-1])
            continue;
        sum+=candi[i];
        ans.push_back(candi[i]);
        f(candi,target,res,ans,sum,i+1);
        ans.pop_back();
        sum-=candi[i];
    }

}
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<int> ans;
        sort(candidates.begin(),candidates.end());
        vector<vector<int>> res;
        f(candidates,target,res,ans,0,0);
        return res;
    }
};