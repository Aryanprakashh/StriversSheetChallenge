class Solution {
public:
    int lengthOfLastWord(string s) {
        // s=trim(s);
        int count=0;
        int flag=0;
        for(int i=s.size()-1;i>=0;i--){
            if(s[i]==' ' and flag){
                break;
            }
            if(s[i]!=' '){
                count++;
                flag=1;
            }
        }
        return count;
    }
};