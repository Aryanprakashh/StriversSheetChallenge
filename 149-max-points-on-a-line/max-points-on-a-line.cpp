class Solution {
public:
    int maxPoints(vector<vector<int>>& points) {

        int ans = 1;

        for (int i = 0; i < points.size(); i++) {
            unordered_map<double, int> mp;

            for (int j = i + 1; j < points.size(); j++) {
                if (points[i][0] == points[j][0]) {
                    mp[10000001]++;
                } else {
                    double slope = (double)(points[i][1] - points[j][1]) /
                                   (double)(points[i][0] - points[j][0]);
                    mp[slope]++;
                }
            }
            int maxi = 0;
            for (auto i : mp) {
                maxi = max(maxi, i.second);
            }
            ans = max(ans, maxi + 1);
        }
        return ans;
    }
};