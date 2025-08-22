#include "solution.hpp"


// https://leetcode-cn.com/problems/word-ladder/solution/shou-hua-tu-jie-127-dan-ci-jie-long-bfsde-dian-x-2/

int Solution::ladderLength(string beginWord, string endWord, vector<string>& wordList) {
	unordered_map<string,bool> dict;
	queue<string> q;
	for (string& w: wordList)
		dict[w] = true;

	int dist=1;
	q.push(beginWord);
	while (!q.empty()) {
		int size = q.size();
		for (int i=0; i<size; i++) {
			string top = q.front();
			if (top == endWord)
				return dist;
			q.pop();

			for (char& c: top) {
				for (char t='a'; t<='z'; t++) {
					char tmp = c;
					c = t;
					if (dict[top]) {
						q.push(top);
						dict[top] = false;
					}
					c = tmp;
				}
			}
		}
		dist++;
	}
	return 0;
}
