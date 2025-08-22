#include "solution.hpp"


int Solution::lengthOfLongestSubstring(string s) {
	std::vector<int> hash(256, -1);
	int length = 0, lastUniqIdx = -1;
	for (int i=0; i<s.length(); i++) {
		lastUniqIdx = std::max(lastUniqIdx, hash[s[i]]);
		hash[s[i]] = i;
		length = std::max(length, i-lastUniqIdx);
	}
	return length;
}

