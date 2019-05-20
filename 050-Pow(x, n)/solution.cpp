#include "solution.hpp"

static auto x = []() {
	// turn off sync
	std::ios::sync_with_stdio(false);
	// untie in/out streams
	cin.tie(NULL);
	return 0;
}();

double Solution::myPow(double x, int n) {
	if (n == 0 || x == 1.0) return 1.0;
	bool negative = (n < 0);
	bool overflow = false;
	int int_max = (int)((~((unsigned int) 0)) >> 1);
    int int_min = ~int_max;
	if (negative) {
		if (n == int_min) {
			overflow = true;
			++n;
		}
		n = -n;
	}
	double cur = x, res = 1.0;
	while (n > 1) {
		int times = n / 2;
		int mod = n - 2 * times;
		if (mod) res *= cur;
		cur *= cur;
		n = times;
	}
	res *= cur;
	if (negative && overflow) return 1.0 / res / x;
	else if (negative) return 1.0 / res;
	else return res;
}
