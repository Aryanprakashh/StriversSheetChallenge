class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> mp;
        nums1.erase(unique(nums1.begin(),nums1.end()),nums1.end());
        nums2.erase(unique(nums2.begin(),nums2.end()),nums2.end());
        for(auto i:nums1){
            mp[i]++;
        }      
        for(auto i:nums2){
            mp[i]++;
        } 
        int mini=INT_MAX;
        for(auto j:mp){
            if(j.second>=2 and j.first<mini){
                mini=j.first;
            }
        }
        return mini==INT_MAX?-1:mini;
    }
};