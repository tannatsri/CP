class Solution {
public:
    
    long long int dp[101][101];
    int dpp(int m, int n, int x, int y) {
        if(x == m and y == n) return 1;
        if(dp[x][y] != 0) return dp[x][y];
        int c = 0;
        if(x < m) {
            c += dpp(m, n, x + 1, y);
        }
        if(y < n) c += dpp(m ,n, x, y + 1);
        return dp[x][y] = c;
    }
    int uniquePaths(int m, int n) {
        for(int i = 0; i <= m; ++i) {
            for(int j = 0; j <= n; ++j) dp[i][j] = 0;
        }
        return dpp(m, n, 1, 1);
        // return dp[m][n];
    }
};