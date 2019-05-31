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
	vector<int> hash(128, 0);
	for (char& c : t)
		hash[c]++;
	int left = 0, right = 0;
	int int_max = (int)((~((unsigned int) 0)) >> 1);
	int minLeft, minLen = int_max, count = t.size();
	while (right < s.size()) {
		if(hash[s[right++]]-- > 0)
			count--;
		while (!count) {
			if (right - left < minLen) {
				minLeft = left;
				minLen = right - left;
			}
			if (hash[s[left++]]++ == 0)
				count++;
		}
	}
	return minLen < int_max ? s.substr(minLeft, minLen) : "";
}
