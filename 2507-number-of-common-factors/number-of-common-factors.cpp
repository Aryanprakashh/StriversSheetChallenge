class Solution {
public:
    int commonFactors(int a, int b) {
        int i=2;
        int count=0;
        int mini=min(a,b);
        for(int i=1;i<=min(a,b);i++){
            if(a%i==0 and b%i==0) count++;
        }
        return count;
    }
};