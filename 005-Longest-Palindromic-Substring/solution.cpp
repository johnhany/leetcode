#include "solution.hpp"

static auto x = []() {
	// turn off sync
	std::ios::sync_with_stdio(false);
	// untie in/out streams
	cin.tie(NULL);
	return 0;
}();


string Solution::longestPalindrome(string s) {
	int n = s.size(), maxLen = 1, maxLeft = 0, i = 0;
	while (i < n) {
		int left = i, right = i;
		while (right < n - 1 && s[right + 1] == s[left]) { right++; }
		i = right + 1;
		while (left > 0 && right < n - 1 && s[left - 1] == s[right + 1]) { left--; right++; }
		if (maxLen < right - left + 1) {
			maxLen = right - left + 1;
			maxLeft = left;
		}
	}
	return s.substr(maxLeft, maxLen);
}
