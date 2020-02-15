#include "solution.hpp"

static auto x = []() {
	// turn off sync
	std::ios::sync_with_stdio(false);
	// untie in/out streams
	cin.tie(NULL);
	return 0;
}();


vector<int> Solution::partialMatchTable(string needle) {
	vector<int> table(needle.size(), 0);
	int len = 0, i = 1;
	while (i < needle.size()) {
		if (needle[i] == needle[len]) {
			len++;
			table[i] = len;
			i++;
		} else {
			if (len) {
				len = table[len-1];
			} else {
				i++;
			}
		}
	}
	return table;
}


int Solution::strStr(string haystack, string needle) {
	if (needle.size() == 0)
		return 0;
	int m = haystack.size(), n = needle.size();
	vector<int> pmt = partialMatchTable(needle);
	int i = 0, j = 0;
	while (i < m) {
		if (haystack[i] == needle[j]) {
			i++;
			j++;
		} else {
			if (j == 0) {
				i++;
			} else {
				j = pmt[j-1];
			}
		}
		if (j == n)
			break;
	}
	if (j == n)
		return i-j;
	else
		return -1;
}
