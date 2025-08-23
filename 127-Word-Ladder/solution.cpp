#include "solution.hpp"


int Solution::ladderLength(string beginWord, string endWord, vector<string>& wordList) {
    unordered_set<string> dict{wordList.begin(), wordList.end()};
    if (dict.find(endWord) == dict.end())
        return 0;
    unordered_set<string> beginSet, endSet;
    beginSet.insert(beginWord);
    endSet.insert(endWord);

    int dist=1;
    while (!beginSet.empty() && !endSet.empty()) {
        dist++;
        unordered_set<string> tmpSet;
        for (string word: beginSet) {
            for (char& c: word) {
                char tmp = c;
                for (char t='a'; t<='z'; t++) {
                    c = t;
                    if (endSet.find(word) != endSet.end())
                        return dist;

                    unordered_set<string>::iterator itr = dict.find(word);
                    if (itr != dict.end()) {
                        dict.erase(itr);
                        tmpSet.insert(word);
                    }
                }
                c = tmp;
            }
        }
        if (tmpSet.size() < endSet.size()) {
            beginSet = tmpSet;
        } else {
            beginSet = endSet;
            endSet = tmpSet;
        }
    }
    return 0;
}
