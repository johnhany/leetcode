#include "solution.hpp"

static auto x = []() {
	// turn off sync
	std::ios::sync_with_stdio(false);
	// untie in/out streams
	cin.tie(NULL);
	return 0;
}();

string Solution::minWindow(string s, string t) {
    if (s.empty() || t.empty()) return "";
	map<char, int> dict, window;
	for (char a : t) {
		auto lb = dict.lower_bound(a);
		if (lb != dict.end() && lb->first == a)
			lb->second++;
		else
			dict.insert(lb, make_pair(a, 1));
		window[a] = 0;
	}
	int required = dict.size();
	int left = 0, right = 0;
	int match = 0;
	int int_max = (int)((~((unsigned int) 0)) >> 1);
	vector<int> rst{int_max, left};
	while (right < s.size()) {
		char c = s[right];
		if (dict.count(c) > 0) {
			window[c]++;
			if (window[c] == dict[c])
				match++;
			if (match == required) {
				while (left <= right) {
					c = s[left];
					if (match == required && right - left + 1 < rst[0]) {
						rst[0] = right - left + 1;
						rst[1] = left;
					}
					if (dict.count(c) > 0) {
						if (match < required)
							break;
						window[c]--;
						if (window[c] < dict[c])
							match--;
					}
					left++;
				}
			}
		}
		right++;
	}
	return rst[0] < int_max ? s.substr(rst[1], rst[0]) : "";
}
