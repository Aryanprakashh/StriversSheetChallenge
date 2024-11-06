class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int max=*max_element(arr.begin(),arr.end());
        int x=0;
        for(auto i:arr){
            if(i==max) return x;
            x++;
        }
        return x;
    }
};