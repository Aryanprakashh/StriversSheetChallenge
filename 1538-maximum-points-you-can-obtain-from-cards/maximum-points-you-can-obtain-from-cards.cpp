class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int ans = 0;
        int n = cardPoints.size();
        for (int i = 0; i < k; i++) {
            ans += cardPoints[i];
        }
        int temp = ans;
        for (int i = k - 1; i >= 0; i--) {
            temp -= cardPoints[i];
            temp += cardPoints[n - k + i];
            ans = max(temp, ans);
        }
        return ans;
    }
};