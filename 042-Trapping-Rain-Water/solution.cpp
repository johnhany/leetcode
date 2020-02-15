#include "solution.hpp"

static auto x = []() {
	// turn off sync
	std::ios::sync_with_stdio(false);
	// untie in/out streams
	cin.tie(NULL);
	return 0;
}();

int Solution::trap(vector<int>& height) {
	int water = 0;
	int i = 0, j = 1;
	while (i < height.size()) {
		if (height[i] == 0) {
			++i;
			j = i+1;
			continue;
		}
		int ridx = i, rmax = 0;;
		for (int j = i+1; j < height.size(); ++j) {
			if (height[j] >= rmax) {
				ridx = j;
				rmax = height[j];
			}
			if (rmax > height[i])
				break;
		}
		if (rmax == 0) break;
		int pit = 0, depth = rmax > height[i] ? height[i] : height[ridx];
		for (int j = i+1; j < ridx; ++j) {
			pit += depth - height[j];
		}
		water += pit;
		i = ridx;
	}
	return water;
}

