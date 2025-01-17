class Solution {
public:
    bool doesValidArrayExist(vector<int>& derived) {
        int n = derived.size();
        int xorVal = 0;
        for (int i = 0; i < n; i++) {
            xorVal ^= derived[i];
        }
        if (xorVal == 1)
            return false;
        return true;
    }
};