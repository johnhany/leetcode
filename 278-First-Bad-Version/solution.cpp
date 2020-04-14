#include "solution.hpp"
#include <cmath>

static auto x = []() {
	// turn off sync
	std::ios::sync_with_stdio(false);
	// untie in/out streams
	cin.tie(NULL);
	return 0;
}();


int Solution::firstBadVersion(int n) {
	int left = 1, right = n;
	while (true) {
		int mid = left + (int)((right - left) / 2);
		if (left == right) {
			return mid;
		} else {
			if (isBadVersion(mid))
				right = mid;
			else
				left = mid+1;
		}
	}
}
