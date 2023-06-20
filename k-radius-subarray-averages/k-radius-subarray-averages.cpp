class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {
        vector<int> ans;
        // for(int i=0;i<nums.size();i++){
        //     int l=i-k,u=i+k;
        //     int sum=0;
        //     if(l>=0 and u<=nums.size()-1){
        //         for(int i=l;i<=u;i++){
        //             sum+=nums[i];
        //         }
        //         sum=sum/((2*k)+1);
        //         ans.push_back(sum);
        //     }
        //     else{
        //         ans.push_back(-1);
        //     }
        // }
        // return ans;
        //TLE

        int n=nums.size();
        vector<int> avg(n,-1);
        if(2*k+1>n){
            return avg;
        }       
        long long sum=0;
        for(int i=0;i<2*k+1;i++){
            sum+=nums[i];
        }
        avg[k]=sum/(2*k+1);
        for(int i=k+1;i<n-k;i++){
            sum+=nums[k+i]-nums[i-k-1];
            avg[i]=sum/(2*k+1);
        }
        return avg;
    }
};