class Solution {
public:
    string modifyString(string s) {
        int n = s.size();
        string ans = "";
        if(n == 1) {
            if(s[0] == '?') return "a";
            else return s;
        }
        for(int i = 0; i < n; ++i) {
            if(s[i] != '?') ans += s[i];
            else {
                if(i != 0 and i < n - 1) {
                for(int j = 97; j < 123; ++j) {
                    if(ans[i - 1] != j and s[i + 1] != j) {ans += j;break;}
                }
                }
                if(i == 0 and n > 1) {
                    for(int j = 97; j < 123; ++j) {
                        if(s[i + 1] != j) {ans += j; break;}
                    }
                }
                if(i == n - 1) {
                    for(int j = 97; j < 123; ++j) {
                        if(ans[i - 1] != j) {ans += j;break;}
                    }
                }
            }
        }
        return ans;
        
    }
};