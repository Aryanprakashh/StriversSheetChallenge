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
    int sol=-1;
    void helper(TreeNode* root,int &ans){
        if(root==NULL)
            return;

        helper(root->left,ans);
        if(sol!=-1 and root->val - sol<ans)
        ans=root->val-sol;
        sol=(root->val);
        helper(root->right,ans);

    }
    int getMinimumDifference(TreeNode* root) {
    // vector<int> v;
    int ans=INT_MAX;
        helper(root,ans);
        return ans;
    }
};