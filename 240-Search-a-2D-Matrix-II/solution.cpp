#include "solution.hpp"
#include <cmath>

static int fast_io = [](){std::ios::sync_with_stdio(false);cin.tie(nullptr);return 0;}();


bool Solution::searchMatrix(vector<vector<int>>& matrix, int target) {
	if (matrix.size() == 0) return false;
	int row = matrix.size()-1, col = 0;
	int width = matrix[0].size();
	while (row >= 0 && col < width) {
		if (target < matrix[row][col])
			row--;
		else if (target > matrix[row][col])
			col++;
		else
			return true;
	}
	return false;
}
