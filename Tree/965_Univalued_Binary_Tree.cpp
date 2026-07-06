965. Univalued Binary Tree

class Solution {
public:
    bool dfs(TreeNode* node, int value) {
        if (node == nullptr)
            return true;

        if (node->val != value)
            return false;

        return dfs(node->left, value) &&
               dfs(node->right, value);
    }

    bool isUnivalTree(TreeNode* root) {
        return dfs(root, root->val);
    }
};