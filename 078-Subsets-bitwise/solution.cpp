#include "solution.hpp"

vector<vector<int>> Solution::subsets(vector<int>& nums) {
	vector<vector<int>> rst;
	int n = nums.size();
	int total = 1 << n;
	for (int i=0; i<total; i++) {
		vector<int> tmp;
		for (int j=0; j<n; j++) {
			if (i & (1<<j))
				tmp.emplace_back(nums[j]);
		}
		rst.emplace_back(tmp);
	}
	return rst;
}
