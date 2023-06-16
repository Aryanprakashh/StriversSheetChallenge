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
void inorder(TreeNode *root,vector<int> &v){
    if(root==NULL)
    return;

    inorder(root->left,v);
    v.push_back(root->val);
    inorder(root->right,v);
}
TreeNode* bsttobalnced(int s,int e,vector<int> &v){
    if(s>e)
        return NULL;

    int mid=(s+e)/2;
    TreeNode* node=new TreeNode(v[mid]);
    node->left=bsttobalnced(s,mid-1,v);
    node->right=bsttobalnced(mid+1,e,v);

    return node;
}
    TreeNode* balanceBST(TreeNode* root) {
        vector<int> v;
        inorder(root,v);

        return bsttobalnced(0,v.size()-1,v);

    }
};