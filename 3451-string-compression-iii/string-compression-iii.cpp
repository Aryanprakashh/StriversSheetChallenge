class Solution {
public:
    string compressedString(string word) {
        string ans="";
        int i=0;
        while(i<word.size()){
            int ch=word[i];
            int cnt=0;
            while(i<word.size() and ch==word[i] and cnt<9){
                i++;cnt++;
            }
            ans+=to_string(cnt);
            ans+=ch;
        }
        return ans;
    }
};