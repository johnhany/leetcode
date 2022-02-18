#include "solution.hpp"

static auto x = []() {
	// turn off sync
	std::ios::sync_with_stdio(false);
	// untie in/out streams
	cin.tie(NULL);
	return 0;
}();

// https://labuladong.gitee.io/algo/1/11/

bool Solution::checkInclusion(string t, string s) {
    unordered_map<char, int> need, window;
	for (char c : t)
		need[c]++;

	int left = 0, right = 0;
	int valid = 0;
	while (right < s.size()) {
		char c = s[right];
		right++;

		if (need.count(c)) {
			window[c]++;
			if (window[c] == need[c])
				valid++;
		}

		while (right - left >= t.size()) {
			if (valid == need.size())
				return true;
			char d = s[left];
			left++;

			if (need.count(d)) {
				if (window[d] == need[d])
					valid--;
				window[d]--;
			}
		}
	}
	return false;
}
