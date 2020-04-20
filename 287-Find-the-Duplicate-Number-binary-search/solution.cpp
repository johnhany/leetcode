#include "solution.hpp"

static auto x = []() {
	// turn off sync
	std::ios::sync_with_stdio(false);
	// untie in/out streams
	cin.tie(NULL);
	return 0;
}();


int Solution::findDuplicate(vector<int>& nums) {
	int left = 0, right = nums.size()-1;
	while (left < right) {
		int mid = (left + right) / 2;
		int count = 0;
		for (int i : nums) {
			if (i <= mid)
				count++;
		}
		if (count > mid)
			right = mid;
		else
			left = mid+1;
	}
	return left;
}
