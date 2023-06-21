class Solution {
public:
    int strStr(string haystack, string needle) {
        for(int i=0;i<haystack.size();i++){
            string s="";
            for(int j=i;j<haystack.size();j++){
                s+=haystack[j];
                if(s==needle)
                return i;
            }
        }
        return -1;
    }
};