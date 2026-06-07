class Solution {
public:
    int earliestFinishTime(vector<int>& lst, vector<int>& ldt, vector<int>& wst, vector<int>& wdt) {
        int n=lst.size() , m=wst.size();
        int minlt=INT_MAX,minwt=INT_MAX,res=INT_MAX;
        for(int i=0;i<n;i++){
            minlt=min(minlt,lst[i]+ldt[i]);
        }
        for(int i=0;i<m;i++){
            minwt=min(minwt,wst[i]+wdt[i]);
            res=min(res,max(minlt,wst[i])+wdt[i]);
        }
        for(int i=0;i<n;i++) res=min(res,max(minwt,lst[i])+ldt[i]);
        return res;
    }
};