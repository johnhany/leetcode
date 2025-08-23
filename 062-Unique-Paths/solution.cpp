#include "solution.hpp"

int Solution::uniquePaths(int m, int n) {
    vector<vector<int>> grid(m, vector<int>(n, 0));
    for (int i=0; i<m; i++) {
        for (int j=0; j<n; j++) {
            if (i==0 || j==0)
                grid[i][j] = 1;
            else
                grid[i][j] = grid[i-1][j] + grid[i][j-1];
        }
    }
    return grid[m-1][n-1];
}
