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
vector<TreeNode*> ans;

void dfs(TreeNode *root,unordered_set<int> &s,bool is_root){
    if(root==NULL)
    return;

    if(s.find(root->val)!=s.end()){
        dfs(root->left,s,true);
        dfs(root->right,s,true);
    }
    else{
        if(is_root) ans.push_back(root);

        TreeNode *leftnode=root->left;
        TreeNode *rightnode=root->right;

        if(root->left){
            if(s.find(root->left->val)!=s.end()){
                root->left=NULL;
            }
        }
        if(root->right){
            if(s.find(root->right->val)!=s.end()){
                root->right=NULL;
            }
        }
        dfs(leftnode,s,false);
        dfs(rightnode,s,false);
    }
}
    vector<TreeNode*> delNodes(TreeNode* root, vector<int>& to_delete) {
        unordered_set<int> s(to_delete.begin(),to_delete.end());
        ans.clear();
        dfs(root,s,true);
        return ans;
    }
};