#ifndef SOLUTION_017
#define SOLUTION_017

#include <iostream>
#include <vector>
#include <map>
#include <queue>
#include <set>
#include <string>
#include <algorithm>

using namespace std;


class Solution {
public:
	vector<string> letterCombinations(string);
	vector<char> getAlpha(char);
	void dfs(vector<string>&, string&, string, int, int);
};

#endif