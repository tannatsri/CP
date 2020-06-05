class Solution {
public:
    int n, sum = 0;
    vector<int> v;
    Solution(vector<int>& w) {
        n = w.size();
        for(auto i:w) {
            sum += i;
            v.push_back(sum);
        }
        
    }
    
    int pickIndex() {
        int z = rand() % sum;
        return upper_bound(v.begin(), v.end(), z) - v.begin();
        
    }
};
