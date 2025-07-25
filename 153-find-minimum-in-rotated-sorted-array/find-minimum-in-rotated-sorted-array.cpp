class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();
        int start = 0, end = n - 1;
        int mini=INT_MAX;
        while (start <= end) {
            int mid = start + (end - start) / 2;

            if (nums[mid] >= nums[start]) {
                mini=min(mini,nums[start]);
                start = mid +1;
            } else if (nums[mid] <= nums[end]) {
                mini=min(mini,nums[mid]);
                end= mid -1;
            }
        }
        return mini;
    }
};