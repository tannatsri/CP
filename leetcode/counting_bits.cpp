class Solution {
public:
    vector<int> countBits(int num) {
        ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
        vector<int> ans(num + 1);
        for(int i = 1; i <= num; ++i) {
            ans[i] = (1 + ans[i & (i - 1)]);
        }
        return ans;
        
    }
};