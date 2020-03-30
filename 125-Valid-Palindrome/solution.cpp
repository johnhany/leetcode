#include "solution.hpp"

static auto x = []() {
	// turn off sync
	std::ios::sync_with_stdio(false);
	// untie in/out streams
	cin.tie(NULL);
	return 0;
}();


char Solution::toLetter(char c) {
	if ((c >= 'a' && c <= 'z') || (c >= '0' && c <= '9')) {
		return c;
	} else if (c >= 'A' && c <= 'Z') {
		return c + 'a' - 'A';
	} else
		return '\0';
}


bool Solution::isPalindrome(string s) {
	if (s.empty()) return true;
	int left = 0, right = s.size()-1;
	while (left < right && !toLetter(s[left]))
		left++;
	while (left < right && !toLetter(s[right]))
		right--;
	while (left < right) {
		if (toLetter(s[left]) != toLetter(s[right]))
			return false;
		left++;
		right--;
		while (left < right && !toLetter(s[left]))
			left++;
		while (left < right && !toLetter(s[right]))
			right--;
	}
	return true;
}
