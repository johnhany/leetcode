#include "solution.hpp"

static auto x = []() {
	// turn off sync
	std::ios::sync_with_stdio(false);
	// untie in/out streams
	cin.tie(NULL);
	return 0;
}();

vector<string> Solution::generateParenthesis(int n) {
	vector<string> res;
	if (n == 0)
		return res;
	deque<string> q;
	q.emplace_back("(");
	int q_len = 1, cur_len;
	string cur;
	for (int i = 1; i < 2*n; i++) {
		cur_len = 0;
		for (int j = 0; j < q_len; j++) {
			cur = q.front();
			int lp = count(cur.begin(), cur.end(), '(');
			int rp = count(cur.begin(), cur.end(), ')');
			if (lp < n) {
				q.emplace_back(cur + "(");
				cur_len++;
			}
			if (lp > rp) {
				q.emplace_back(cur + ")");
				cur_len++;
			}
			q.pop_front();
		}
		q_len = cur_len;
	}
	while (!q.empty()) {
		res.emplace_back(std::move(q.front()));
		q.pop_front();
	}
	return res;
}
