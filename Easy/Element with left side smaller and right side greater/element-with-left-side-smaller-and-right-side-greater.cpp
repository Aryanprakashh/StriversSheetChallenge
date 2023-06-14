//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

int findElement(int arr[], int n);

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++) cin >> a[i];
        cout << findElement(a, n) << endl;
    }
    return 0;
}

// } Driver Code Ends


int findElement(int arr[], int n) {
    int select=0;
    for(int i=1;i<n-1;i++){
        bool flag1=true,flag2=true;
        select=arr[i];
        // searching in left
        for(int j=0;j<i;j++){
            if(arr[j]>select)
            {
                flag1=false;
                break;
            }
        }
        //searching in right
        for(int j=i;j<n;j++){
            if(arr[j]<select)
           {
               flag2=false;
               break;
           }
        }
        if(flag1 and flag2){
            return select;
        }
        if(i==n-2)
        return -1;
    }
}