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
	for (char c: s) {
		if (c == '(' || c == '[' || c == '{') {
			q.push(c);
			continue;
		}
		if (!q.empty()) {
			char t = q.top();
			if ((c == ')' && t == '(') || (c == ']' && t == '[') || (c == '}' && t == '{')) {
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
