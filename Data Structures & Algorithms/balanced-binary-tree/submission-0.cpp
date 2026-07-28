class Solution {
public:
    int treeHeight(TreeNode* root) {
        if (!root) return 0;

        int leftHeight = treeHeight(root->left);
        if (leftHeight == -1) return -1;

        int rightHeight = treeHeight(root->right);
        if (rightHeight == -1) return -1;

        if (abs(leftHeight - rightHeight) > 1) return -1;

        return 1 + max(leftHeight, rightHeight);

    }

    bool isBalanced(TreeNode* root) {
        return treeHeight(root) != -1;
    }
};