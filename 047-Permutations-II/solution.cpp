#include "solution.hpp"

static auto x = []() {
	// turn off sync
	std::ios::sync_with_stdio(false);
	// untie in/out streams
	cin.tie(NULL);
	return 0;
}();

vector<vector<int>> Solution::permuteUnique(vector<int>& nums) {
	sort(nums.begin(), nums.end());
	vector<vector<int>>res;
	perm(res, nums, 0);
	return res;
}

void Solution::perm(vector<vector<int>>& res, vector<int> nums, int pos){
	if (pos == nums.size() - 1) {
		res.push_back(nums);
		return;
	}
	for (int i = pos; i < nums.size(); i++) {
		if(i != pos && nums[i] == nums[pos])
			continue;
		swap(nums[pos], nums[i]);
		perm(res, nums, pos + 1);
	}
}
