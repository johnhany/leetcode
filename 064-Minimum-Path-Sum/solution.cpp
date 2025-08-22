#include "solution.hpp"

int Solution::minPathSum(vector<vector<int>>& grid) {
    if (grid.empty() || grid[0].empty()) return 0;
    int n = grid.size(), m = grid[0].size();
	vector<vector<int>> table(n, vector<int>(m));
    table[0][0] = grid[0][0];
    for (int i = 1; i < n; i++)
        table[i][0] = grid[i][0] + table[i-1][0];
    for (int j = 1; j < m; j++)
        table[0][j] = grid[0][j] + table[0][j-1];
    for (int i = 1; i < n; ++i) {
        for (int j = 1; j < m; ++j) {
            table[i][j] = min(table[i-1][j], table[i][j-1]) + grid[i][j];
        }
    }
    return table[n-1][m-1];
}
