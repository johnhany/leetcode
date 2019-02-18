#include "solution.hpp"
#include <limits.h>

static auto x = []() {
	// turn off sync
	std::ios::sync_with_stdio(false);
	// untie in/out streams
	cin.tie(NULL);
	return 0;
}();


int Solution::threeSumClosest(vector<int>& nums, int target) {
	int dist = INT_MAX, res;
	sort(nums.begin(), nums.end());
	if (nums.size() < 3) return 0;
	for (int k = 0; k < nums.size()-2; ++k) {
		if (nums[k] - target > dist) break;
		if (k > 0 && nums[k] == nums[k - 1]) continue;
		int i = k + 1, j = nums.size() - 1, sum;
		while (i < j) {
			sum = nums[k] + nums[i] + nums[j];
			if (sum == target)
				return sum;
			else {
				if (abs(sum - target) < dist) {
					dist = abs(sum - target);
					res = sum;
				}
				if (sum < target) ++i;
				else --j;
			}
		}
	}
	return res;
}
