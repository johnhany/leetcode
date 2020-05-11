#include "solution.hpp"

static auto x = []() {
	// turn off sync
	std::ios::sync_with_stdio(false);
	// untie in/out streams
	cin.tie(NULL);
	return 0;
}();

int Solution::longestValidParentheses(string s) {
	int n = s.size();
	if (n == 0) return 0;
	stack<int> q;
	int rst = 0;
	vector<int> checked(n+1, 0);
	for (int i = 0; i < n; i++) {
		if (s[i] == '(') {
			q.push(i);
		} else {
			if (q.empty())
				continue;
			int left = q.top();
			q.pop();
			int len = i - left + 1 + checked[left];
			checked[i+1] = len;
			rst = max(rst, len);
		}
	}
	return rst;
}
