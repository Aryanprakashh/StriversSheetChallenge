class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        priority_queue<pair<int,string>> pq;
        int n=names.size();
        vector<string> v;
        for(int i=0;i<n;i++){
            // pair s=make_pair(heights[i],names[i]);
            pq.push({heights[i],names[i]});
        }
        while(!pq.empty()){
            v.push_back(pq.top().second);
            pq.pop();
        }
        return v;
    }
};