#include "solution.hpp"

static auto x = []() {
	// turn off sync
	std::ios::sync_with_stdio(false);
	// untie in/out streams
	cin.tie(NULL);
	return 0;
}();

int Solution::uniquePaths(int m, int n) {
	vector<vector<int>> table(n, vector<int>(m, 1));
    for (int i = 1; i < n; ++i) {
        for (int j = 1; j < m; ++j) {
            table[i][j] = table[i-1][j] + table[i][j-1];
        }
    }
    return table[n-1][m-1];
}
