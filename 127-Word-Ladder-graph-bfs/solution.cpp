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

    vector<int> dist(dict.size(), -1);
    queue<int> q;
    int source = dict[beginWord];
    int target = dict[endWord];
    q.push(source);
    dist[source] = 0;

    while (!q.empty()) {
        int top = q.front();
        q.pop();
        if (top == target)
            return dist[top]/2+1;
        for (int i: edge[top]) {
            if (dist[i] < 0) {
                dist[i] = dist[top]+1;
                q.push(i);
            }
        }
    }
    return 0;
}
