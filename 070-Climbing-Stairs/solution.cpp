#include "solution.hpp"

static auto x = []() {
	// turn off sync
	std::ios::sync_with_stdio(false);
	// untie in/out streams
	cin.tie(NULL);
	return 0;
}();

int Solution::climbStairs(int n) {
    int a = 0, b = 1;
    int rst;
    while (n) {
        rst = a + b;
        a = b;
        b = rst;
        n--;
    }
    return rst;
}
