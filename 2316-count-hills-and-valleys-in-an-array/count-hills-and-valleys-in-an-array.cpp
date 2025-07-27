class Solution {
public:
    int countHillValley(vector<int>& nums) {
        int hill = 0;
        int left = 0;
        int n = nums.size();
        for (int i = 1; i < n - 1; i++) {
            if (nums[i] != nums[i + 1]) {
                if ((nums[i] > nums[left] and nums[i] > nums[i + 1]) or
                    (nums[i] < nums[left] and nums[i] < nums[i + 1])) {
                    hill++;
                }
                left=i;
            }
        }
        return hill;
    }
};