#include "solution.hpp"

static auto x = []() {
	// turn off sync
	std::ios::sync_with_stdio(false);
	// untie in/out streams
	cin.tie(NULL);
	return 0;
}();

vector<vector<int>> Solution::permute(vector<int>& nums) {
	vector<vector<int>> vec;
	perm(vec, nums, 0);
	return vec;
}

void Solution::perm(vector<vector<int>>& vec, vector<int> nums, int index) {
	if(index == nums.size())
		vec.push_back(nums);
	for(int i=index; i<nums.size(); i++){
		swap(nums[index], nums[i]);
		perm(vec, nums, index+1);
		//swap(nums[index], nums[i]);
	}
}
