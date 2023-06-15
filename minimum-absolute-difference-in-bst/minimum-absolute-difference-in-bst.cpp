/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void helper(TreeNode* root,vector<int>& v,int &ans){
        if(root==NULL)
            return;

        helper(root->left,v,ans);
        if(v.size()!=0 and root->val - v.back()<ans)
        ans=root->val-v.back();
        v.push_back(root->val);
        helper(root->right,v,ans);

    }
    int getMinimumDifference(TreeNode* root) {
    vector<int> v;
    int ans=INT_MAX;
        helper(root,v,ans);
        return ans;
    }
};