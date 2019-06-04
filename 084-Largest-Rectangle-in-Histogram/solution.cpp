#include "solution.hpp"

static auto x = []() {
	// turn off sync
	std::ios::sync_with_stdio(false);
	// untie in/out streams
	cin.tie(NULL);
	return 0;
}();

int Solution::largestRectangleArea(vector<int>& heights) {
	if (heights.empty()) return 0;
	int len = heights.size();
	vector<int> left(len), right(len);
	left[0] = -1;
	right[len - 1] = len;
	for (int i = 1; i < len; ++i) {
		int p = i - 1;
		while (p >= 0 && heights[p] >= heights[i])
			p = left[p];
		left[i] = p;
	}
	for (int i = len - 2; i >= 0; --i) {
		int p = i + 1;
		while (p < len && heights[p] >= heights[i])
			p = right[p];
		right[i] = p;
	}
	int largest = 0;
	for (int i = 0; i < len; ++i)
		largest = std::max(largest, heights[i] * (right[i] - left[i] - 1));
	return largest;
}
