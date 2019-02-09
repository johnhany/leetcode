#include "solution.hpp"

static auto x = []() {
	// turn off sync
	std::ios::sync_with_stdio(false);
	// untie in/out streams
	cin.tie(NULL);
	return 0;
}();


int Solution::lengthOfLongestSubstring(string s) {
	typedef map<char, size_t> HashType;
	HashType hash;
	size_t length = 0, idx = 0;
	for (size_t i = 0; i < s.length(); i++) {
		HashType::iterator itr = hash.lower_bound(s[i]);
		if (itr != hash.end() && !(hash.key_comp()(s[i], itr->first))) {
			if (itr->second >= idx) {
				length = max(length, i - idx);
				idx = itr->second + 1;
			}
			itr->second = i;
		} else {
			hash.insert(itr, HashType::value_type(s[i], i));
		}
	}
	return max(length, s.length() - idx);
}

