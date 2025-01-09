#include "solution.hpp"

static auto x = []() {
	// turn off sync
	std::ios::sync_with_stdio(false);
	// untie in/out streams
	cin.tie(NULL);
	return 0;
}();

vector<vector<int>> Solution::fourSum(vector<int>& nums, int target) {
	set<vector<int>> res;
	sort(nums.begin(), nums.end());
	if (nums.size() < 4) return vector<vector<int>>();
	for (int p = 0; p < nums.size()-3; p++) {
		for (int q = nums.size()-1; q > p+2; q--) {
			int i = p + 1, j = q - 1;
			while (i < j) {
				long sum = (long)nums[p] + (long)nums[q] + (long)nums[i] + (long)nums[j];
				if (sum == (long)target) {
					res.insert({nums[p], nums[i], nums[j], nums[q]});
					while (i < j && nums[i] == nums[i + 1]) ++i;
					while (i < j && nums[j] == nums[j - 1]) --j;
					++i; --j;
				} else if (sum < (long)target) ++i;
				else --j;
			}
		}
	}
	return vector<vector<int>>(res.begin(), res.end());
}
