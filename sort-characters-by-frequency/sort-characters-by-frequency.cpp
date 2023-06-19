class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> m;
        for(auto it:s){
            m[it]++;
        }
        vector<pair<int,char>> v;
        for(auto it:m){
           v.push_back(make_pair(it.second,it.first));
        }
        sort(v.begin(),v.end());
        reverse(v.begin(),v.end());
    s.clear();
        for(auto it:v){
            int k=it.first;
            while(k--)
            s+=it.second;
        }
        return s;
    }
};