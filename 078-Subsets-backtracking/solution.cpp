#include "solution.hpp"

static auto x = []() {
	// turn off sync
	std::ios::sync_with_stdio(false);
	// untie in/out streams
	cin.tie(NULL);
	return 0;
}();


void Solution::backtrack(vector<vector<int>>& rst, vector<int>& tmp, vector<int>& nums, int start) {
	rst.emplace_back(vector<int>(tmp));
	for (int i = start; i < nums.size(); i++) {
		tmp.emplace_back(nums[i]);
		backtrack(rst, tmp, nums, i+1);
		tmp.pop_back();
	}
}


vector<vector<int>> Solution::subsets(vector<int>& nums) {
	vector<vector<int>> rst;
	vector<int> tmp;
	backtrack(rst, tmp, nums, 0);
	return rst;
}
