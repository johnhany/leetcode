#include "solution.hpp"

static auto x = []() {
	// turn off sync
	std::ios::sync_with_stdio(false);
	// untie in/out streams
	cin.tie(NULL);
	return 0;
}();

int Solution::divide(int dividend, int divisor) {
	if (divisor == 1) {
		return dividend;
	}
	
	if (dividend == INT_MIN && divisor == -1) {
		return INT_MAX;
	}
	
	if (divisor == INT_MIN) {
		if (dividend == INT_MIN) {
			return 1;
		} else {
			return 0;
		}
	}
	
	int sign = 1;
	if ((dividend < 0) ^ (divisor < 0)) {
		sign = -1;
	}
	
	unsigned int a = abs(dividend);
	unsigned int b = abs(divisor);
	
	int ans = 0;
	
	while (a >= b) {
		int x = 0;
		while (a >= (b<<x)) {
			if ((b<<x) >= 1073741824) {
				x++;
				break;
			}
			x++;
		}
		x--;
		ans += (1<<x);
		a -= (b<<x);
	}
	
	return ans * sign;
}
