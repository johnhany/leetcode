#include "solution.hpp"

static auto x = []() {
	// turn off sync
	std::ios::sync_with_stdio(false);
	// untie in/out streams
	cin.tie(NULL);
	return 0;
}();

int Solution::uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
    int n = obstacleGrid.size(), m = obstacleGrid[0].size();
    if (obstacleGrid[n-1][m-1] || obstacleGrid[0][0])
        return 0;
	vector<vector<unsigned long long>> table(n, vector<unsigned long long>(m));
    table[0][0] = 1;
    for (int i = 1; i < n; i++)
        table[i][0] = obstacleGrid[i][0] ? 0 : table[i-1][0];
    for (int j = 1; j < m; j++)
        table[0][j] = obstacleGrid[0][j] ? 0 : table[0][j-1];
    for (int i = 1; i < n; ++i) {
        for (int j = 1; j < m; ++j) {
            table[i][j] = obstacleGrid[i][j] ? 0 : table[i-1][j] + table[i][j-1];
        }
    }
    return table[n-1][m-1];
}
