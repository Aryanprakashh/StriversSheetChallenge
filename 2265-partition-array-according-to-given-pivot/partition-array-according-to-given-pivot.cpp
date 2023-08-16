class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int> left;
        vector<int> right;

        for(int i=0;i<nums.size();i++){
            if(nums[i]<pivot){
                left.push_back(nums[i]);
            }
            else if(nums[i]==pivot){
                right.push_back(nums[i]);
            }
        }
        for(int i=0;i<nums.size();i++){
            if(nums[i]>pivot){
                right.push_back(nums[i]);
            }
        }
        // reverse(right.begin(),right.end());
        for(int i=0;i<right.size();i++){
            left.push_back(right[i]);
        }
        return left;
    }
};