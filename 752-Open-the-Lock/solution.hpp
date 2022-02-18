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
    string rollUp(string s, int i);
    string rollDown(string s, int i);
    int openLock(vector<string>& deadends, string target);
};

#endif