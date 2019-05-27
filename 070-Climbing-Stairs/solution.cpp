#include "solution.hpp"

static auto x = []() {
	// turn off sync
	std::ios::sync_with_stdio(false);
	// untie in/out streams
	cin.tie(NULL);
	return 0;
}();

int Solution::climbStairs(int n) {
    int a[2] = {1, 2};
    int tmp = 2;
    while (tmp < n) {
        int i = tmp % 2;
        a[i] += a[1 - i];
        ++tmp;
    }
    return a[1 - n % 2];
}
