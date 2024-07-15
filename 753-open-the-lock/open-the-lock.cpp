class Solution {
public:
    void findstate(queue<string>& q, unordered_set<string>& st,string &curr) {
        
        for(int i=0;i<4;i++){
            char ch=curr[i];

            char dec=ch=='0'?'9':ch-1;
            char inc=ch=='9'?'0':ch+1;

            curr[i]=dec;
            if(st.find(curr)==st.end()){
                q.push(curr);
                st.insert(curr);
            }
            curr[i]=inc;
            if(st.find(curr)==st.end()){
                q.push(curr);
                st.insert(curr);
            }
            curr[i]=ch;
        }
    }

    int openLock(vector<string>& deadends, string target) {
        queue<string> q;
        unordered_set<string> st(begin(deadends), end(deadends));
        string start = "0000";

        if(st.find(start)!=st.end()) return -1;
        
        q.push(start);
        int level = 0;
        while (!q.empty()) {
            int size = q.size();
            while (size--) {
                string curr = q.front();
                q.pop();
                if (curr == target) {
                    return level;
                }

                findstate(q, st, curr);
            }
            level++;
        }
        return -1;
    }
};