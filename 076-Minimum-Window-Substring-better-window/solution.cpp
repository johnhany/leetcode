#include "solution.hpp"

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
	vector<pair<int, char>> filter;
	for (int i = 0; i < s.size(); ++i) {
		char a = s[i];
		if (dict.count(a) > 0)
			filter.emplace_back(i, a);
	}
	int left = 0, right = 0;
	int match = 0;
	int int_max = (int)((~((unsigned int) 0)) >> 1);
	vector<int> rst{int_max, left};
	while (right < filter.size()) {
		char c = filter[right].second;
		if (dict.count(c) > 0) {
			window[c]++;
			if (window[c] == dict[c])
				match++;
			if (match == required) {
				while (left <= right) {
					c = filter[left].second;
					int start = filter[left].first;
					int end = filter[right].first;
					if (match == required && end - start + 1 < rst[0]) {
						rst[0] = end - start + 1;
						rst[1] = start;
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
