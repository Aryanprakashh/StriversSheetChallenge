class Solution {
public:
    string reverseWords(string s) {
        string word="";
        stack<string> st;
        for(int i=0;i<s.length();i++){
            if(s[i]==' '){
                if(!word.empty()){
                st.push(word);
                word="";
                }
            }
            else
            word+=s[i];
        }
        if(!word.empty()){
            st.push(word);
        }
        string result="";
        while(st.size()!=1){
            result+=st.top()+" ";
            st.pop();
        }
        result+=st.top();
        return result;
    }
};