#include "solution.hpp"

static auto x = []() {
	// turn off sync
	std::ios::sync_with_stdio(false);
	// untie in/out streams
	cin.tie(NULL);
	return 0;
}();

bool Solution::isMatch(string s, string p) {
	int pidx = -1, sidx = -1;
	int i = 0, j = 0;
	while (i < s.size()){
		if (j < p.size() && (p[j] == '?' || p[j] == s[i])) {
			i++;
			j++;
		} else if (j < p.size() && p[j] == '*') {
			pidx = j;
			j++;
			sidx = i;
		} else if (pidx >= 0 && pidx < p.size()) {
			j = pidx + 1;
			sidx++;
			i = sidx;
		} else
			return false;
	}
	while (j < p.size() && p[j] == '*')
		j++;
	return j == p.size();
}

