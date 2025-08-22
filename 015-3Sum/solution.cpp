#include "solution.hpp"

// http://www.cnblogs.com/grandyang/p/4481576.html

vector<vector<int>> Solution::threeSum(vector<int>& nums) {
	std::sort(nums.begin(), nums.end());
	if (nums.empty() || nums.front()>0 || nums.back()<0)
		return {};
	vector<vector<int>> rst;
	int n = nums.size();
	for (int k=0; k<n; k++) {
		if (nums[k]>0)
			break;
		if (k>0 && nums[k]==nums[k-1])
			continue;
		int target = -nums[k];
		int i=k+1, j=n-1;
		while (i<j) {
			if (nums[i]+nums[j] == target) {
				rst.emplace_back(std::initializer_list<int>{nums[k],nums[i],nums[j]});
				while (i<j && nums[i]==nums[i+1])
					i++;
				while (i<j && nums[j-1]==nums[j])
					j--;
				i++;
				j--;
			} else if (nums[i]+nums[j] < target)
				i++;
			else
				j--;
		}
	}
	return rst;
}
