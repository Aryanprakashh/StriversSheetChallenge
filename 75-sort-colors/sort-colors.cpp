class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        int red = 0, blue = 0, white = 0;
        for (int i = 0; i < n; i++) {
            if (nums[i] == 0)
                red++;
            if (nums[i] == 1)
                white++;
            if (nums[i] == 2)
                blue++;
        }
        nums.clear();
        while (red) {
            nums.push_back(0);
            red--;
        }
        while (white) {
            nums.push_back(1);
            white--;
        }
        while (blue) {
            nums.push_back(2);
            blue--;
        }
    }
};