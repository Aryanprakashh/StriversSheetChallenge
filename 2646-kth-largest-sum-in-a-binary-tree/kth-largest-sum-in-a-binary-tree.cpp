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
    long long kthLargestLevelSum(TreeNode* root, int k) {
        queue<TreeNode*> q;
        q.push(root);
        int lvl=0;
        vector<long long> res;
        while (!q.empty()) {
            int size = q.size();
            long long sum = 0;

            while (size--){
            TreeNode* node = q.front();
            q.pop();
            if (node->left != NULL) {
                q.push(node->left);
            }
            if (node->right != NULL) {
                q.push(node->right);
            }
            sum += (long long)node->val;
        }
        res.push_back(sum);
        }
        sort(res.begin(),res.end(),greater<long long>());
        if(k>res.size()) return -1;
        else return res[k-1];
    }
};