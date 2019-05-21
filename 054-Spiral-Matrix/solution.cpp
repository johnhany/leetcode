#include "solution.hpp"

static auto x = []() {
	// turn off sync
	std::ios::sync_with_stdio(false);
	// untie in/out streams
	cin.tie(NULL);
	return 0;
}();

vector<int> Solution::spiralOrder(vector<vector<int>>& matrix) {
	vector<int> rst;
    if (matrix.empty()) return rst;
    int rows = matrix.size(), cols = matrix[0].size();
    int round = (min(rows, cols) + 1) / 2;
    int height = rows, width = cols;
    for (int r = 0; r < round; ++r) {
        for (int i = 0; i < width; ++i)
            rst.emplace_back(matrix[r][r+i]);
        if (height >= 3)
            for (int i = 1; i < height-1; ++i)
                rst.emplace_back(matrix[r+i][r+width-1]);
        if (height >= 2)
            for (int i = width-1; i >= 0; --i)
                rst.emplace_back(matrix[r+height-1][r+i]);
        if (height >= 3 && width >= 2)
            for (int i = height-2; i >= 1; --i)
                rst.emplace_back(matrix[r+i][r]);
        height -= 2;
        width -= 2;
    }
    return rst;
}
