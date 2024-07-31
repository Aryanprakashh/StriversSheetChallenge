class Solution {
public:
bool check(int n){
    int v[7]={0};
    while(n!=0){
        if(n%10==0 || n%10>6) return false;
        v[n%10]++;
        n/=10;
    }

    for(int i=1;i<=6;i++){
        if(v[i]!=0 and v[i]!=i) return false;
    }
    return true;
}
    int nextBeautifulNumber(int n) {
        n++;
        while(1){
            if(check(n)) return n;
            n++;
        }
    }
};