#include "solution.hpp"

static auto x = []() {
	// turn off sync
	std::ios::sync_with_stdio(false);
	// untie in/out streams
	cin.tie(NULL);
	return 0;
}();


int Solution::longestConsecutive(vector<int>& nums) {
	if (!nums.size()) return 0;
	map<int, int> mapObj;

	for (int i{}; i < nums.size(); i++) {
		mapObj[nums[i]];
	}
	int maxNum{1}, cnt{1};

	auto itr = mapObj.begin();
	auto itr2 = mapObj.begin();
	advance(itr2, 1);

	for (; itr2 != mapObj.end(); itr++, itr2++) {
		if (itr2->first == itr->first + 1) {
			cnt++;
			maxNum = max(maxNum, cnt);
		} else {
			cnt = 1;
		}
	}
	return maxNum;
}
