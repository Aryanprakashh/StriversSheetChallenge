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
int grs=0;
    void helper(TreeNode *root){
        if(root==NULL) return;

        helper(root->right);
        grs+=root->val;
        root->val=grs;
        helper(root->left);
        return ;
    }
    TreeNode* convertBST(TreeNode* root) {
        helper(root);
        return root;
    }
};