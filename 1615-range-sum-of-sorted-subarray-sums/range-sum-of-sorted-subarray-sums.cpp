class Solution {
public:
int mod=1e9+7;
    int rangeSum(vector<int>& nums, int n, int left, int right) {
        vector<int> subarray;
        for(int i=0;i<n;i++){
            int sum=0;
            for(int j=i;j<n;j++){
                sum+=nums[j];
                subarray.push_back(sum);
            }
        }
        sort(subarray.begin(),subarray.end());

        int sum=0;
        for(int i=left-1;i<right;i++){
            sum=(sum+subarray[i])%mod;
        }
        return sum;
    }
};