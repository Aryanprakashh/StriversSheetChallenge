class Solution {
public:
    string smallestFromLeaf(TreeNode* root) {
        string smallest;
        dfs(root, "", smallest);
        return smallest;
    }
    
    void dfs(TreeNode* node, string path, string& smallest) {
        if (node == NULL) return;
        
        // Append current node's character to the path
        path += char('a' + node->val);
        
        // If it's a leaf node, compare and update smallest
        if (node->left == NULL && node->right == NULL) {
            reverse(path.begin(), path.end());
            if (smallest.empty() || path < smallest) {
                smallest = path;
            }
            reverse(path.begin(), path.end());
        }
        
        // Recursively traverse left and right subtrees
        dfs(node->left, path, smallest);
        dfs(node->right, path, smallest);
    }
};