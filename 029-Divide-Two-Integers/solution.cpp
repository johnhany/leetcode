#include "solution.hpp"

static auto x = []() {
	// turn off sync
	std::ios::sync_with_stdio(false);
	// untie in/out streams
	cin.tie(NULL);
	return 0;
}();

int Solution::divide(int dividend, int divisor) {
	if (dividend == divisor) return 1;
    if (divisor == 1) return dividend;
    if (dividend == 0) return 0;
	int int_max = (int)((~((unsigned int) 0)) >> 1);
	int int_min = ~int_max;

	bool sgn = !((dividend >> 31) ^ (divisor >> 31));
	bool over_flow = false;
    if (dividend == int_min)
		if (divisor == -1)
			return int_max;
		else {
			dividend >>= 1;
			dividend = -dividend;
			over_flow = true;
		}
	else if (dividend < 0)
		dividend = -dividend;
    if (divisor == int_min)
		return 0;
	else if (divisor < 0)
		divisor = -divisor;
    if (divisor > dividend) {
		if (over_flow && dividend - divisor > -dividend)
			return sgn ? 1 : -1;
		else
			return 0;
	}

	int res = 0, tmp, m;
	while (dividend >= divisor) {
		tmp = divisor, m = 1;
		while ((tmp << 1) > 0 && (tmp << 1) <= dividend) {
			tmp <<= 1;
			m <<= 1;
		}
		dividend -= tmp;
		res += m;
	}
	if (over_flow) {
		res += res;
		if (dividend + dividend > divisor)
			res += 1;
	}
    return sgn ? res : -res;
}
