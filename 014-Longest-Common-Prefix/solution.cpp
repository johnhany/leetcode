#include "solution.hpp"


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
