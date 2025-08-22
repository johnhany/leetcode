#include "solution.hpp"


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
