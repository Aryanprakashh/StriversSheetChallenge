class Solution {
    int countPairs(vector<int>& nums, int p, int diff){
        for(int i=1;i<nums.size();i++){
            if(nums[i]-nums[i-1]<=diff){
                i++;
                p--;
            }
        }
        return p<=0;
    }
public:
    int minimizeMax(vector<int>& nums, int p) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int left=0;
        int right=nums[n-1]-nums[0],res=0;  // max difference can be = right
        while(left<=right){
            int mid=left+(right-left)/2;
            if(countPairs(nums,p,mid)){
                res=mid;
                right=mid-1;
            } else {
                left=mid+1;
            }
        }
        return res;
    }
};