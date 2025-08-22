#include "solution.hpp"


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
