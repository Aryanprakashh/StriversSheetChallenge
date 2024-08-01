class Solution {
public:
    int countSeniors(vector<string>& details) {
        int ans=0;
        for(auto i:details){
            string age="";
            age+=i[11];
            age+=i[12];
            if(stoi(age)>60) ans++;
        }
        return ans;
    }
};