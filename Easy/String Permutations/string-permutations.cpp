//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    //Complete this function
    
    int factor(int x){
        if(x==1) return 1;
        
        return x*factor(x-1);
    }
    vector<string> permutation(string s)
    {
        //Your code here
        vector<string> ans;
        int size=s.size();
        int m=factor(size);
        // ans.push_back(s);
        while(m){
            next_permutation(s.begin(),s.end());
            ans.push_back(s);
            m--;
        }
        sort(ans.begin(),ans.end());
        return ans; 
    }
};

//{ Driver Code Starts.

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		string S;
		cin>>S;
		Solution ob;
		vector<string> vec = ob.permutation(S);
		for(string s : vec){
		    cout<<s<<" ";
		}
		cout<<endl;
	
	}
	return 0;
}
// } Driver Code Ends