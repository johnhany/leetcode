#include "solution.hpp"

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
