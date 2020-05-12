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

using namespace std;


class Solution {
public:
	void solveSudoku(vector<vector<char>>& board);
	bool fill(vector<vector<char>>& board, int r, int c, vector<vector<int>>& row, vector<vector<int>>& col, vector<vector<int>>& block);
};

#endif