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
public:
    void DFS(string& s, int left, int right, int idx, vector<string>& rst, string& path);
    vector<string> removeInvalidParentheses(string s);
};

#endif