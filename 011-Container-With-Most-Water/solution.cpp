#include "solution.hpp"

static auto x = []() {
	// turn off sync
	std::ios::sync_with_stdio(false);
	// untie in/out streams
	cin.tie(NULL);
	return 0;
}();

/*
// Brutal force
int Solution::maxArea(vector<int>& height) {
	size_t tmp, area = 0;
	for (size_t i = 1; i < height.size(); i++) {
		for (size_t j = 0; j < i; j++) {
			tmp = (i - j) * min(height[i], height[j]);
			if (area < tmp) {
				area = tmp;
			}
		}
	}
	return (int)area;
}
*/

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
