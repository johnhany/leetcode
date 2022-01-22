#include "solution.hpp"

static auto x = []() {
	// turn off sync
	std::ios::sync_with_stdio(false);
	// untie in/out streams
	cin.tie(NULL);
	return 0;
}();

int Solution::maxArea(vector<int>& height) {
	int i = 0, j = height.size()-1;
	int tmp, h, area = 0;
	while (i < j) {
		h = min(height[i], height[j]);
		tmp = h * (j-i);
		if (tmp > area)
			area = tmp;
		if (height[i] < height[j])
			while (height[++i] < h && i < j);
		else
			while (height[j--] < h && i < j);
	}
	return area;
}
