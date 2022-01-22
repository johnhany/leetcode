#include "solution.hpp"
#include <limits.h>

static auto x = []() {
	// turn off sync
	std::ios::sync_with_stdio(false);
	// untie in/out streams
	cin.tie(NULL);
	return 0;
}();


int Solution::reverse(int x) {
	int y = 0;
	int sign = (x>0) ? +1 : -1;
	int int_max = int((~(unsigned int)0) >> 1);
	int int_min = int(~int_max);
	if (x == int_min)
		return 0;
	x *= sign;
	while (x) {
		int v = x % 10;
		if ((int_max-v)/10 < y) {
			return 0;
		}
		y = y*10 + v;
		x = x/10;
	}
	return sign*y;
}
