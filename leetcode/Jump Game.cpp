class Solution {
public:
    bool canJump(vector<int>& nums) {
        int st = 0;
        for(int i = 0; i < nums.size() ; ++i) {
            if(i > st) return false;
            st = max(st, i + nums[i]);
        }
        return true;
        
    }
};