#include "solution.hpp"

string Solution::minWindow(string s, string t) {
    if (s.empty() || t.empty()) return "";
	vector<int> hash(128, 0);
	for (char& c : t)
		hash[c]++;
	int left = 0, right = 0;
	int int_max = (int)((~((unsigned int) 0)) >> 1);
	int minLeft, len = int_max, count = t.size();
	while (right < s.size()) {
		if(hash[s[right++]]-- > 0)
			count--;
		while (!count) {
			if (right - left < len) {
				minLeft = left;
				len = right - left;
			}
			if (hash[s[left++]]++ == 0)
				count++;
		}
	}
	return len < int_max ? s.substr(minLeft, len) : "";
}
