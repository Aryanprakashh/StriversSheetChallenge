//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string x)
    {
        // Your code here
        if(x.size()%2 == 1) return false;
        stack <char> s;
        for(int i = 0 ; i < x.size() ; i++) 
        {
            char ch = x[i];
            if(ch == '(' || ch == '{' || ch == '[')
            {
                s.push(ch);
            }
            else if (!s.empty() && ((ch == ')' && s.top() == '(') ||
                    (ch == ']' && s.top() == '[') ||
                    (ch == '}' && s.top() == '{')))
            {
                s.pop();
            }
            else return false;
        }
        return true;
    }

};

//{ Driver Code Starts.

int main()
{
   int t;
   string a;
   cin>>t;
   while(t--)
   {
       cin>>a;
       Solution obj;
       if(obj.ispar(a))
        cout<<"balanced"<<endl;
       else
        cout<<"not balanced"<<endl;
   }
}
// } Driver Code E==1