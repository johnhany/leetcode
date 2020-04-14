#include "solution.hpp"
#include <cmath>

static auto x = []() {
	// turn off sync
	std::ios::sync_with_stdio(false);
	// untie in/out streams
	cin.tie(NULL);
	return 0;
}();


int Solution::numSquares(int n) {
	int layer = 1, layer_count = 1;
	queue<int> tree;
	tree.push(n);
	while (layer < 4) {
		int next_layer_count = 0;
		for (int i = 0; i < layer_count; i++) {
			int m = tree.front();
			tree.pop();
			int end = (int)sqrt(m);
			for (int j = 1; j <= end; j++) {
				if (j*j == m)
					return layer;
				else {
					tree.push(m - j*j);
					next_layer_count++;
				}
			}
		}
		layer++;
		layer_count = next_layer_count;
	}
	return 4;
}
