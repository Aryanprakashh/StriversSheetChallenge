class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size()+nums2.size();
        vector<int> arr(n);
        merge(nums1.begin(),nums1.end(),nums2.begin(),nums2.end(),arr.begin());
        sort(arr.begin(),arr.end());

        return n%2?arr[n/2]:(arr[n/2-1]+arr[n/2])/2.0;

    }
};