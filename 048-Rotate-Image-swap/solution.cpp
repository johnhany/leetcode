#include "solution.hpp"

static auto x = []() {
	// turn off sync
	std::ios::sync_with_stdio(false);
	// untie in/out streams
	cin.tie(NULL);
	return 0;
}();

void Solution::rotate(vector<vector<int>>& matrix) {
	int n = matrix.size();
	for (int i=0; i<n/2; i++) {
		for (int j=0; j<n; j++) {
			swap(matrix[i][j], matrix[n-i-1][j]);
		}
	}
	for (int i=0; i<n; i++) {
		for (int j=0; j<i; j++) {
			swap(matrix[i][j], matrix[j][i]);
		}
	}
	return;
}
