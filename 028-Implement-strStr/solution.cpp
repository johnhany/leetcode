#include "solution.hpp"

static auto x = []() {
	// turn off sync
	std::ios::sync_with_stdio(false);
	// untie in/out streams
	cin.tie(NULL);
	return 0;
}();

int Solution::strStr(string haystack, string needle) {
	if (needle.size() == 0)
		return 0;
	int m = haystack.size(), n = needle.size();
	for (int i = 0; i <= m-n; i++) {
		int j = 0;
		while (j < n)
			if (needle[j] == haystack[i+j])
				j++;
			else
				break;
		if (j == n)
			return i;
	}
	return -1;
}
