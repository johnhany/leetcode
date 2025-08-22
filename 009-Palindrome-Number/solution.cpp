#include "solution.hpp"


bool Solution::isPalindrome(int x) {
	if (x < 0) {
		return false;
	} else {
		int len = 0;
		int tmp = x;
		do {
			tmp /= 10;
			len++;
		} while (tmp);
		int base[10] = {
			1, 10, 100, 1000, 10000,
			100000, 1000000, 10000000, 100000000, 1000000000
		};
		for (int i = 0; i < len / 2; i++) {
			if (x % 10 != x / base[len-2*i-1])
				return false;
			x -= x / base[len-2*i-1] * base[len-2*i-1];
			x /= 10;
		}
		return true;
	}
}
