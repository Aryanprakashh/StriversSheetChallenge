class Solution {
public:
int firstoccur(vector<int> &arr,int size,int key){
    int start=0;
    int end=size-1;
    int ans=-1;
    while(start<=end){
        int mid=start+(end-start)/2;
        if(arr[mid]==key){
            ans= mid;
            end=mid-1;
        }
        else if(arr[mid]<key){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    return ans;
}
int lastoccur(vector<int> &arr,int size,int key){
    int start=0;
    int end=size-1;
    int ans=-1;
    while(start<=end){
        int mid=start+(end-start)/2;
        if(arr[mid]==key){
            ans= mid;
            start=mid+1;
        }
        else if(arr[mid]<key){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    return ans;
}
    vector<int> searchRange(vector<int>& nums, int target) {
        int first=firstoccur(nums,nums.size(),target);
        int last=lastoccur(nums,nums.size(),target);
        vector<int> v;
        v.push_back(first);
        v.push_back(last);
        return v;
    }
};