#include "solution.hpp"

static auto x = []() {
	// turn off sync
	std::ios::sync_with_stdio(false);
	// untie in/out streams
	cin.tie(NULL);
	return 0;
}();

vector<vector<int>> Solution::permute(vector<int>& nums) {
	if (nums.empty()) return vector<vector<int>>{};
	return perm(nums);
}

vector<vector<int>> Solution::perm(vector<int> nums) {
	if (nums.size() == 1) return vector<vector<int>>{ {nums[0]} };
	vector<vector<int>> rst;
	for (int i = 0; i < nums.size(); ++i) {
		if (i != 0)
			swap(nums[0], nums[i]);
		vector<int> subset(nums.begin()+1, nums.end());
		vector<vector<int>> tmp = perm(subset);
		for (int j = 0; j < tmp.size(); ++j) {
			vector<int> new_rst{nums[0]};
			new_rst.insert(new_rst.end(), tmp[j].begin(), tmp[j].end());
			rst.push_back(new_rst);
		}
	}
	return rst;
}
