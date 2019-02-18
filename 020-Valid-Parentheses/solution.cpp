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
	map<char, char> LuT;
	LuT.insert(pair<char, char>('(', ')'));
	LuT.insert(pair<char, char>('[', ']'));
	LuT.insert(pair<char, char>('{', '}'));
	if (s.empty()) return true;
	for (int i = 0; i < s.size(); i++) {
		if (LuT.count(s[i]) > 0) {
			q.push(s[i]);
			continue;
		}
		if (!q.empty()) {
			if (s[i] == LuT.find(q.top())->second)
				q.pop();
			else
				return false;
		} else if (LuT.count(s[i]) == 0)
				return false;
	}
	if (!q.empty()) return false;
	else return true;
}
