#include "solution.hpp"

static auto x = []() {
	// turn off sync
	std::ios::sync_with_stdio(false);
	// untie in/out streams
	cin.tie(NULL);
	return 0;
}();


string Solution::convert(string s, int numRows) {
	string t = "";
	if (numRows == 1) {
		return s;
	}
	int scale = 2 * (numRows - 1);
	int len = s.size();
	for (int stride = 0; stride < numRows; stride++) {
		for (int k = 0; k < len - stride; k+=scale) {
			t += s[k + stride];
			if (stride != 0 && stride != numRows - 1 && k + scale - stride < len) {
				t += s[k + scale - stride];
			}
		}
	}
	return t;
}
