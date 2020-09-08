class Solution {
public:
    
    vector<string> s;
    void traverse(TreeNode* root, string bin) {
        if(root == nullptr) return;
        
        if(root->val) bin += '1';
        else bin += '0';
        
        if(root->right == nullptr and root->left == nullptr) {
            s.push_back(bin);
            return;
        }
    
        traverse(root->right, bin);
        traverse(root->left, bin);
        
        
    }
    int sumRootToLeaf(TreeNode* root) {
        traverse(root, "");
        long long int ans = 0;
        for(auto i: s) {
            cout << i << " ";
            int n = i.length() - 1;
            long long int temp = 0;
            for(auto j: i) {
                if(j == '1') {
                    temp += pow(2, n);
                }
                n--;
            }
            ans += temp;
        }
        return ans;
        
    }
};