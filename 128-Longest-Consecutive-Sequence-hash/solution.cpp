#include "solution.hpp"

static auto x = []() {
	// turn off sync
	std::ios::sync_with_stdio(false);
	// untie in/out streams
	cin.tie(NULL);
	return 0;
}();


// https://leetcode-cn.com/problems/longest-consecutive-sequence/solution/xiao-bai-lang-ha-xi-ji-he-ha-xi-biao-don-j5a2/

int Solution::longestConsecutive(vector<int>& nums) {
	unordered_set<int> hash{nums.begin(), nums.end()};
	int rst = 0;
	for (int i: hash) {
		if (hash.find(i-1) == hash.end()) {
			int tmp = i+1;
			while (hash.find(tmp) != hash.end()) {
				tmp++;
			}
			rst = max(rst, tmp-i);
		}
	}
	return rst;
}
