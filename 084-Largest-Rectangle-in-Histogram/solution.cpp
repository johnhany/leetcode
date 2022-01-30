#include "solution.hpp"

static auto x = []() {
	// turn off sync
	std::ios::sync_with_stdio(false);
	// untie in/out streams
	cin.tie(NULL);
	return 0;
}();

int Solution::largestRectangleArea(vector<int>& heights) {
	heights.push_back(0);
	int n = heights.size();
	vector<int> index;
	int rst = 0;
	for (int i=0; i<n; i++) {
		while (!index.empty() && heights[index.back()] >= heights[i]) {
			int h = heights[index.back()];
			index.pop_back();
			int left = !index.empty() ? index.back() : -1;
			rst = max(rst, h * (i - left - 1));
		}
		index.push_back(i);
	}
	return rst;
}
