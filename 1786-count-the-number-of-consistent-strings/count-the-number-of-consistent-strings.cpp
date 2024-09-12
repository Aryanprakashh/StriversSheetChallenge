class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        unordered_map<char,int> st;
        for(auto i:allowed){
            st[i]++;
        }
        int ans=0;
        for(auto i:words){
            bool flag=true;
            for(auto j:i){
                if(st.find(j)==st.end()){
                    flag=false;
                    break;
                }
            }
            if(flag)
            ans++;
        }
        return ans;
    }
};