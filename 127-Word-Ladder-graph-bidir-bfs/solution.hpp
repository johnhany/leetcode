#ifndef SOLUTION_029
#define SOLUTION_029

#include <iostream>
#include <vector>
#include <map>
#include <queue>
#include <set>
#include <string>
#include <sstream>
#include <algorithm>
#include <list>
#include <iterator>
#include <unordered_map>
#include <unordered_set>
#include <stack>

using namespace std;


class Solution {
private:
    unordered_map<string, int> dict;
    vector<vector<int>> edge;
    int id=0;
public:
    void addWord(string& word);
    void addEdge(string& word);
    int ladderLength(string beginWord, string endWord, vector<string>& wordList);
};

#endif