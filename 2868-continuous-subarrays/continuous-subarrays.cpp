class Solution {
public:
    long long continuousSubarrays(vector<int>& nums) {
        int n = nums.size();
        map<int, int> mp;
        int left = 0;
        int right = 0;
        long long cnt = 0;

        while (right < n) {
            mp[nums[right]]++;
            while (abs(mp.rbegin()->first - mp.begin()->first) >
                   2) { // if it is greater than 2 then shrink left window
                mp[nums[left]] -= 1;
                if (mp[nums[left]] == 0) {
                    mp.erase(nums[left]); // erase window
                }
                left++;
            }
            cnt += (right - left + 1); // sum of substr
            right++;
        }
        return cnt;
    }
};