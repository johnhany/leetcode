#include "solution.hpp"


string Solution::rollUp(string s, int i) {
	if (s[i] == '9')
		s[i] = '0';
	else
		s[i]++;
	return s;
}

string Solution::rollDown(string s, int i) {
	if (s[i] == '0')
		s[i] = '9';
	else
		s[i]--;
	return s;
}

int Solution::openLock(vector<string>& deadends, string target) {
	deque<string> q;
	q.push_back("0000");
	unordered_set<string> visited, deads;
	visited.insert("0000");
	for (string s: deadends)
		deads.insert(s);
	int step = 0;
	while (!q.empty()) {
		int len = q.size();
		for (int i=0; i<len; i++) {
			string top = q.front();
			q.pop_front();
			if (deads.count(top) > 0)
				continue;
			if (top == target)
				return step;
			for (int j=0; j<4; j++) {
				string up = rollUp(top, j);
				string down = rollDown(top, j);
				if (visited.count(up) == 0) {
					q.push_back(up);
					visited.insert(up);
				}
				if (visited.count(down) == 0) {
					q.push_back(down);
					visited.insert(down);
				}
			}
		}
		step++;
	}
	return -1;
}
