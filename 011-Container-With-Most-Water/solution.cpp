#include "solution.hpp"

static auto x = []() {
	// turn off sync
	std::ios::sync_with_stdio(false);
	// untie in/out streams
	cin.tie(NULL);
	return 0;
}();

int Solution::maxArea(vector<int>& height) {
	int area = 0, i = 0, j = height.size() - 1;
    while (i < j) {
        if (height[i] < height[j]) {
			area = max(area, (j - i) * height[i]);
            i++;
        } else {
			area = max(area, (j - i) * height[j]);
            j--;
        }
    }
    return area;
}
