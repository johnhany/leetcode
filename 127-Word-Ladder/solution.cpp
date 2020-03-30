#include "solution.hpp"

static auto x = []() {
	// turn off sync
	std::ios::sync_with_stdio(false);
	// untie in/out streams
	cin.tie(NULL);
	return 0;
}();


int Solution::ladderLength(string beginWord, string endWord, vector<string>& wordList) {
	unordered_set<string> all(wordList.begin(), wordList.end());
	unordered_set<string> startSet, endSet, *forward, *backward;
	if (all.count(endWord) == 0)
		return 0;
	startSet.insert(beginWord);
	endSet.insert(endWord);
	int rst = 1;
	while (!startSet.empty() && !endSet.empty()) {
		rst ++;
		if (startSet.size() <= endSet.size()) {
			forward = &startSet;
			backward = &endSet;
		} else {
			forward = &endSet;
			backward = &startSet;
		}
		unordered_set<string> tmpSet;
		for (string cur : *forward) {
			for (int i = 0; i < cur.size(); i++) {
				char tmp = cur[i];
				for (char c = 'a'; c <= 'z'; c++) {
					cur[i] = c;
					if (backward->count(cur) != 0)
						return rst;
					if (all.count(cur) != 0) {
						tmpSet.insert(cur);
						all.erase(cur);
					}
				}
				cur[i] = tmp;
			}
		}
		std::swap(*forward, tmpSet);
	}
	return 0;
}
