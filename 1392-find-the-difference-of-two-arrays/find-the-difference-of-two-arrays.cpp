class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> s1(nums1.begin(),nums1.end());
        unordered_set<int> s2(nums2.begin(),nums2.end());
        vector<int> r1,r2;


        for(auto i:s1){
            if(s2.count(i)==0) r1.push_back(i);
        }
        for(auto i:s2){
            if(s1.count(i)==0) r2.push_back(i);
        }
        vector<vector<int>> ans;
        ans.push_back(r1);
        ans.push_back(r2);
        return ans;
    }
};