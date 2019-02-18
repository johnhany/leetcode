#include "solution.hpp"

static auto x = []() {
	// turn off sync
	std::ios::sync_with_stdio(false);
	// untie in/out streams
	cin.tie(NULL);
	return 0;
}();


string Solution::longestCommonPrefix(vector<string>& strs) {
	if (strs.size() == 0)
		return "";
	else if (strs.size() == 1)
		return strs[0];
	else {
		string prefix = "";
		string base = strs[0];
		int len = base.size();
		for (vector<string>::iterator itr = strs.begin()+1; itr != strs.end(); itr++) {
			if (base.compare(itr->substr(0, len)) == 0)
				continue;
			else {
				do {
					len -= 1;
					base = base.substr(0, len);
				} while (base.compare(itr->substr(0, len)) != 0);
				if (len == 0)
					return "";
			}
		}
		return base;
	}
}
