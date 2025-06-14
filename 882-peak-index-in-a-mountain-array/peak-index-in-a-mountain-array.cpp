class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int maxi=INT_MIN;
        int n=arr.size();
        for(int i=1;i<=n-2;i++){
            if(arr[i-1]<arr[i] and arr[i]>arr[i+1]) return i;
        }
        return -1;
    }
};