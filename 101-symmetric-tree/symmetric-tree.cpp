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
    bool helper(TreeNode* left,TreeNode *right){
        if(left==NULL and right==NULL) return true;

        if(left==NULL or right==NULL or left->val!=right->val) return false;

        return helper(left->left,right->right) and helper(left->right,right->left);
    }
    bool isSymmetric(TreeNode* root) {
        if(root==NULL) return true;
        return helper(root->left,root->right);
    }
};