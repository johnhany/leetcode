#include "solution.hpp"

static auto x = []() {
	// turn off sync
	std::ios::sync_with_stdio(false);
	// untie in/out streams
	cin.tie(NULL);
	return 0;
}();


int Solution::findDuplicate(vector<int>& nums) {
	int fast = nums[0], slow = nums[0];
	do {
		fast = nums[nums[fast]];
		slow = nums[slow];
	} while (fast != slow);
	slow = nums[0];
	while (fast != slow) {
		fast = nums[fast];
		slow = nums[slow];
	}
	return fast;
}
