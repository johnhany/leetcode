#include "solution.hpp"

static auto x = []() {
	// turn off sync
	std::ios::sync_with_stdio(false);
	// untie in/out streams
	cin.tie(NULL);
	return 0;
}();


string Solution::longestCommonPrefix(vector<string>& strs) {
	if (strs.empty())
		return "";
	else if (strs.size() == 1)
		return strs[0];
	for (int i=0; i<strs[0].length(); i++) {
		for (int j=1; j<strs.size(); j++)
			if (i == strs[j].length() || strs[0][i] != strs[j][i])
				return strs[0].substr(0, i);
	}
	return strs[0];
}
