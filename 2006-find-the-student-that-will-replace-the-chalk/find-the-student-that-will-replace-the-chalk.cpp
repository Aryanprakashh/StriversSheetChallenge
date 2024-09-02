class Solution {
public:
    int chalkReplacer(vector<int>& chalk, int k) {
        int c = 0;
        long long sum=0;
        for(int i=0;i<chalk.size();i++)
        {
            sum+=chalk[i];
        }
        k=k%sum;
            for (int i = 0; i < chalk.size() ;i++) {
                if (k < chalk[i]) {
                    c = i;
                    return c;
                }
                k = k - chalk[i];
            }
        return c;
    }
};