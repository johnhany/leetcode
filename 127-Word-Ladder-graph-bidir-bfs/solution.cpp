#include "solution.hpp"


// https://leetcode-cn.com/problems/word-ladder/solution/dan-ci-jie-long-by-leetcode-solution/

void Solution::addWord(string& word) {
	if (dict.find(word) == dict.end()) {
		dict[word] = id++;
		edge.push_back({});
	}
}

void Solution::addEdge(string& word) {
	addWord(word);
	int baseIdx = dict[word];
	for (char& c: word) {
		char tmp = c;
		c = '*';
		addWord(word);
		int deltaIdx = dict[word];
		edge[baseIdx].push_back(deltaIdx);
		edge[deltaIdx].push_back(baseIdx);
		c = tmp;
	}
}

int Solution::ladderLength(string beginWord, string endWord, vector<string>& wordList) {
	for (string& w: wordList)
		addEdge(w);
	addEdge(beginWord);

	if (dict.find(endWord) == dict.end())
		return 0;

	vector<int> distBegin(dict.size(), -1), distEnd(dict.size(), -1);
	queue<int> qBegin, qEnd;
	int source = dict[beginWord];
	int target = dict[endWord];
	qBegin.push(source);
	distBegin[source] = 0;
	qEnd.push(target);
	distEnd[target] = 0;

	while (!qBegin.empty() && !qEnd.empty()) {
		int qSize = qBegin.size();
		for (int k=0; k<qSize; k++) {
			int top = qBegin.front();
			qBegin.pop();
			if (distEnd[top] >= 0)
				return (distBegin[top] + distEnd[top])/2+1;
			for (int i: edge[top]) {
				if (distBegin[i] < 0) {
					distBegin[i] = distBegin[top]+1;
					qBegin.push(i);
				}
			}
		}

		qSize = qEnd.size();
		for (int k=0; k<qSize; k++) {
			int top = qEnd.front();
			qEnd.pop();
			if (distBegin[top] >= 0)
				return (distBegin[top] + distEnd[top])/2+1;
			for (int i: edge[top]) {
				if (distEnd[i] < 0) {
					distEnd[i] = distEnd[top]+1;
					qEnd.push(i);
				}
			}
		}
	}
	return 0;
}
