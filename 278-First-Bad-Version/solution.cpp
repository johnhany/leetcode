#include "solution.hpp"
#include <cmath>


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
