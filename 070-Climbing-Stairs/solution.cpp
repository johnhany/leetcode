#include "solution.hpp"

static auto x = []() {
	// turn off sync
	std::ios::sync_with_stdio(false);
	// untie in/out streams
	cin.tie(NULL);
	return 0;
}();

int Solution::climbStairs(int n) {
    if (n==1)
        return 1;
    int first = 1, last = 1;
    int rst;
    n--;
    while (n) {
        rst = first + last;
        first = last;
        last = rst;
        n--;
    }
    return rst;
}
