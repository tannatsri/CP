class Solution {
public:
    
    vector<int> val;
    void inOrder(TreeNode* root) {
        if(root != nullptr) {
            val.push_back(root->val);
            inOrder(root->left);
            inOrder(root->right);
        }
        
    }
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        inOrder(root1);
        inOrder(root2);
        sort(val.begin(), val.end());
        return val;
    }
};