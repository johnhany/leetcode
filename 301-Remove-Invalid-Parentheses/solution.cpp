#include "solution.hpp"
#include <cmath>


void Solution::DFS(string& s, int left, int right, int idx, vector<string>& rst, string& path) {
	if (right > left) return;
	if (idx == s.size()) {
		if (left == right && (rst.empty() || rst[0].size() == path.size()))
			rst.push_back(path);
		return;
	}
	if (!rst.empty() && path.size() + s.size() - idx < rst[0].size())
		return;

	char c = s[idx++];
	path.push_back(c);
	if (c == '(')
		DFS(s, left+1, right, idx, rst, path);
	else if (c == ')')
		DFS(s, left, right+1, idx, rst, path);
	else
		DFS(s, left, right, idx, rst, path);
	path.pop_back();

	while (s[idx] == c)
		idx++;
	DFS(s, left, right, idx, rst, path);

	return;
}

vector<string> Solution::removeInvalidParentheses(string s) {
	if (s.empty()) return {""};
	vector<string> rst;
	string path;
	DFS(s, 0, 0, 0, rst, path);
	if (rst.empty()) return {""};
	else return rst;
}
