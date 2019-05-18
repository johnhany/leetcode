#include "solution.hpp"

static auto x = []() {
	// turn off sync
	std::ios::sync_with_stdio(false);
	// untie in/out streams
	cin.tie(NULL);
	return 0;
}();

void Solution::rotate(vector<vector<int>>& matrix) {
	int dim = matrix.size();
	if (dim == 1) return;
	for (int i = 0; i < dim-1; ++i) {
		for (int j = 0; j < dim-1-i; ++j) {
			swap(matrix[i][j], matrix[dim-1-j][dim-1-i]);
		}
	}
	for (int i = 0; i < dim/2; ++i) {
		for (int j = 0; j < dim; ++j) {
			swap(matrix[i][j], matrix[dim-1-i][j]);
		}
	}
	return;
}
