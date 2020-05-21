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
	vector<vector<string>> solveNQueens(int n);
	void search(vector<vector<string>>& answer, vector<string>& board, vector<int>& cols,
        vector<int>& up_diagonals, vector<int>& down_diagonals, int row_index, int n);
};

#endif