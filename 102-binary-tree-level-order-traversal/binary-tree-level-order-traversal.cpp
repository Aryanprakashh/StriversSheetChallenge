/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> res;
        if (root == NULL)
            return res;
        queue<TreeNode *> q;
        q.push(root);

        while (!q.empty()) {
            int size = q.size();
            vector<int> currlevel;
            while (size > 0) {
                TreeNode* currnode = q.front();
                q.pop();
                currlevel.push_back(currnode->val);
                size--;
                if(currnode->left!=NULL){
                    q.push(currnode->left);
                }
                if(currnode->right!=NULL){
                    q.push(currnode->right);
                } 
            }
                res.push_back(currlevel);
        }
        return res;
    }
};