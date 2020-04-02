#include "solution.hpp"

static auto x = []() {
	// turn off sync
	std::ios::sync_with_stdio(false);
	// untie in/out streams
	cin.tie(NULL);
	return 0;
}();


bool Solution::checkPalindrome(string s, int start, int end) {
	while (start < end)
		if (s[start++] != s[end--])
			return false;
	return true;
}

void Solution::subPartition(vector<vector<string>>& q, string s, int start, vector<string> cur) {
	if (start >= s.size()) {
		q.push_back(cur);
		return;
	}
	for (int i = 1; start + i <= s.size(); i++) {
		if (checkPalindrome(s, start, start+i-1)) {
			cur.push_back(s.substr(start, i));
			subPartition(q, s, start+i, cur);
			cur.pop_back();
		}
	}
}

vector<vector<string>> Solution::partition(string s) {
	if (s.empty()) return {};
	vector<vector<string>> rst;
	subPartition(rst, s, 0, vector<string>());
	return rst;
}
