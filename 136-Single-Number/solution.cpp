#include "solution.hpp"


int Solution::singleNumber(vector<int>& nums) {
	int total = 0;
	for (int a : nums)
		total ^= a;
	return total;
}
