#include "solution.hpp"

int Solution::minimumTotal(vector<vector<int>>& triangle) {
	if (triangle.empty()) return 0;
	int n = triangle.size();
	for (int i = n-1; i > 0; i--) {
		for (int j = 0; j < i; j++) {
			triangle[i-1][j] += min(triangle[i][j], triangle[i][j+1]);
		}
	}
	return triangle[0][0];
}
