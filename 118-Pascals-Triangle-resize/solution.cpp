#include "solution.hpp"

static auto x = []() {
	// turn off sync
	std::ios::sync_with_stdio(false);
	// untie in/out streams
	cin.tie(NULL);
	return 0;
}();


vector<vector<int>> Solution::generate(int numRows) {
	if (numRows == 0) return {};
	vector<vector<int>> rst(numRows);
	rst[0] = {1};
	for (int row = 1; row < numRows; row++) {
		rst[row].resize(row+1);
		rst[row][0] = 1;
		rst[row][row] = 1;
		for (int col = 1; col < row; col++) {
			rst[row][col] = rst[row-1][col-1] + rst[row-1][col];
		}
	}
	return rst;
}
