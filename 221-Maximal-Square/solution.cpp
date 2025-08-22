#include "solution.hpp"

int Solution::maximalSquare(vector<vector<char>>& matrix) {
    if (matrix.empty() || matrix[0].empty()) return 0;
    int n = matrix.size(), m = matrix[0].size();
    vector<vector<int>> dp(n, vector<int>(m, 0));
    int rst = matrix[0][0] - '0';
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (matrix[i][j] == '0')
                continue;
            if (i == 0 || j == 0)
                dp[i][j] = matrix[i][j] - '0';
            else {
                dp[i][j] = min(dp[i-1][j], min(dp[i][j-1], dp[i-1][j-1])) + 1;
            }
            rst = max(rst, dp[i][j]);
        }
    }
    return rst * rst;
}
