class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        if(root == nullptr) return root;
        TreeNode* temp = root->left;
        root->left = root->right;
        root->right = temp;
        TreeNode * t = invertTree(root->left);
        TreeNode * ttt = invertTree(root->right);
        return root;  
    }
};