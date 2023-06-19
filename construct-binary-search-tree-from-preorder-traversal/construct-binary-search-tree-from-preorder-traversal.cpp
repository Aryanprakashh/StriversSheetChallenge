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
    TreeNode* insertintobst(TreeNode *root,int v){
        if(root==NULL){
            root=new TreeNode(v);
            return root;
        }
        if(v<root->val){
            root->left=insertintobst(root->left,v);
        }
        else{
            root->right=insertintobst(root->right,v);
        }
        return root;
    }

    TreeNode* bstFromPreorder(vector<int>& preorder) {
        TreeNode *temp=NULL;
        for(int i=0;i<preorder.size();i++){
            temp=insertintobst(temp,preorder[i]);
        }
        return temp;
    }
};