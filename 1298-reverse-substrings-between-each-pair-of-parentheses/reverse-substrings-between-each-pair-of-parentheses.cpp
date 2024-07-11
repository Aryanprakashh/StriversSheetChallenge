class Solution {
public:
    string reverseParentheses(string s) {
        stack<char> st;
        int n=s.size();
        for(int i=0;i<n;i++){
            if(s[i]==')'){
                string t="";
                while(st.top()!='('){
                    t+=st.top();
                    st.pop();
                }
                st.pop();

                for(auto &i:t){
                    st.push(i);
                }
            }
            else{
                st.push(s[i]);
            }
        }
        string t="";
        while(!st.empty()){
                    t+=st.top();
                    st.pop();
                }
        reverse(t.begin(),t.end());
        return t;
    }
};