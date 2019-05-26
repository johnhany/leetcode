#include "solution.hpp"

static auto x = []() {
	// turn off sync
	std::ios::sync_with_stdio(false);
	// untie in/out streams
	cin.tie(NULL);
	return 0;
}();

int Solution::mySqrt(int x) {
    if (x == 0 || x == 1) return x;
	int rst = x / 2;
    int tmp = x / rst;
    if (tmp == rst)
        return rst;
    else if (tmp > rst)
        return findSqrt(x, rst, x);
    else
        return findSqrt(x, 0, rst);
}

int Solution::findSqrt(int x, int low, int high) {
    if (high - low == 1)
        return low;
    int rst = (high + low) / 2;
    int tmp = x / rst;
    if (tmp == rst)
        return rst;
    else if (tmp > rst)
        return findSqrt(x, rst, high);
    else
        return findSqrt(x, low, rst);
}
