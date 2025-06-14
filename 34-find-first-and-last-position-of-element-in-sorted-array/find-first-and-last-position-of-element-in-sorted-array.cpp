class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int low = 0;
        int high = nums.size() - 1;
        vector<int> res = {-1,-1}; // Initialize result vector with default values

        // Find the first occurrence of the target
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (nums[mid] == target) {
                res[0] = mid;   // Update the first occurrence
                high = mid - 1; // Continue searching on the left half
            } else if (nums[mid] < target) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }

        // If the target is not found, return [-1, -1]
        if (res[0] == -1) {
            return res;
        }

        // Find the last occurrence of the target
        low = res[0];
        high = nums.size() - 1;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (nums[mid] == target) {
                res[1] = mid;  // Update the last occurrence
                low = mid + 1; // Continue searching on the right half
            } else if (nums[mid] < target) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }

        return res;
    }
};