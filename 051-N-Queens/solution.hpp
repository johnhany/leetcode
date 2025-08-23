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
private:
    vector<vector<string>> res;
public:
    bool isValid(vector<string>& board, int row, int col);
    void backtrack(vector<string>& board, int row);
    vector<vector<string>> solveNQueens(int n);
};

#endif