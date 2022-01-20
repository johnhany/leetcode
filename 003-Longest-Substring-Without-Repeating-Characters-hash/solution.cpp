#include "solution.hpp"

static auto x = []() {
	// turn off sync
	std::ios::sync_with_stdio(false);
	// untie in/out streams
	cin.tie(NULL);
	return 0;
}();


int Solution::lengthOfLongestSubstring(string s) {
	std::vector<int> hash(256, -1);
	int length = 0, lastUniqIdx = -1, n = s.length();
	for (int i=0; i<n; i++) {
		lastUniqIdx = std::max(lastUniqIdx, hash[s[i]]);
		hash[s[i]] = i;
		length = std::max(length, i-lastUniqIdx);
	}
	return length;
}

