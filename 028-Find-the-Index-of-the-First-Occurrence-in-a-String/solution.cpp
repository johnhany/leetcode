#include "solution.hpp"


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
