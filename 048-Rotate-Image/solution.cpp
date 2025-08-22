#include "solution.hpp"

void Solution::rotate(vector<vector<int>>& matrix) {
	int dim = matrix.size();
	if (dim == 1) return;
	int layers = dim / 2;
	int len = dim - 1;
	for (int i = 0; i < layers; ++i) {
		for (int j = i; j < len+i; ++j) {
			int tmp = matrix[i][j];
			matrix[i][j] = matrix[dim-1-j][i];
			matrix[dim-1-j][i] = matrix[dim-1-i][dim-1-j];
			matrix[dim-1-i][dim-1-j] = matrix[j][dim-1-i];
			matrix[j][dim-1-i] = tmp;
		}
		len -= 2;
	}
	return;
}
