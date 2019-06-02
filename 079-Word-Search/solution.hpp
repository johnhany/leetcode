#ifndef SOLUTION_029
#define SOLUTION_029

#include <iostream>
#include <vector>
#include <map>
#include <queue>
#include <set>
#include <string>
#include <algorithm>
#include <list>
#include <iterator>
#include <unordered_map>
#include <unordered_set>

using namespace std;


class Solution {
public:
	bool exist(vector<vector<char>>& board, string word);
	bool findWord(vector<vector<char>>& board, vector<vector<bool>>& flag,
				  int x, int y, string word, int i);
};

#endif