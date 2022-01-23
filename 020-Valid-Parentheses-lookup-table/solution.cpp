#include "solution.hpp"
#include <stack>

static auto x = []() {
	// turn off sync
	std::ios::sync_with_stdio(false);
	// untie in/out streams
	cin.tie(NULL);
	return 0;
}();

bool Solution::isValid(string s) {
	std::stack<char> q;
	std::map<char,char> lut{{'(',')'}, {'{','}'}, {'[',']'}};
	for (char c: s) {
		if (lut.count(c) > 0) {
			q.push(c);
			continue;
		}
		if (!q.empty()) {
			auto itr = lut.find(q.top());
			if (itr != lut.end() && itr->second == c) {
				q.pop();
				continue;
			} else {
				return false;
			}
		} else {
			return false;
		}
	}
	if (q.empty())
		return true;
	else
		return false;
}
