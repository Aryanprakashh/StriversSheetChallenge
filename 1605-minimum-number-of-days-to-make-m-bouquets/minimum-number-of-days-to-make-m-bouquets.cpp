class Solution {
public:
int getdays(vector<int> bloomday,int mid,int k){
    int num=0;
    int count=0;

    for(auto i:bloomday){
        if(i<=mid) count++;

        else count=0;

        if(count==k) {num++; count=0;}
    }
        return num;
}
    int minDays(vector<int>& bloomDay, int m, int k) {
       int start=0;
       int end=0;

       end=*max_element(bloomDay.begin(),bloomDay.end());
       int minday=-1;

       while(start<=end){
        int mid=(start+end)/2;

        if(getdays(bloomDay,mid,k)>= m){
            minday=mid;
            end=mid-1;
        }
        else{
            start=mid+1;
        }
       }
       return minday;
    }
};