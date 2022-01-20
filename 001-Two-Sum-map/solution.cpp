#include "solution.hpp"

static auto x = []() {
	// turn off sync
	std::ios::sync_with_stdio(false);
	// untie in/out streams
	cin.tie(NULL);
	return 0;
}();


vector<int> Solution::twoSum(vector<int>& nums, int target) {
	unordered_map<int,int> hash;
	vector<int> rst;
	for (int i=0; i<nums.size(); i++) {
		unordered_map<int, int>::iterator itr = hash.find(target - nums[i]);
		if (itr == hash.end()) {
			hash.insert(pair<int,int>(nums[i], i));
		} else {
			rst.push_back(itr->second);
			rst.push_back(i);
			return rst;
		}
	}
	return rst;
}

