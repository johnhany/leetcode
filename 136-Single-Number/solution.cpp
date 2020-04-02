#include "solution.hpp"

static auto x = []() {
	// turn off sync
	std::ios::sync_with_stdio(false);
	// untie in/out streams
	cin.tie(NULL);
	return 0;
}();


int Solution::singleNumber(vector<int>& nums) {
	int total = 0;
	for (int a : nums)
		total ^= a;
	return total;
}
