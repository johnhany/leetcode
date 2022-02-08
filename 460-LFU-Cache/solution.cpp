#include "solution.hpp"

static auto x = []() {
	// turn off sync
	std::ios::sync_with_stdio(false);
	// untie in/out streams
	cin.tie(NULL);
	return 0;
}();


// https://leetcode.com/problems/lfu-cache/discuss/1499801/C%2B%2B-oror-Easy-to-understand-oror-3-unordered_maps
