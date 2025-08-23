#include "solution.hpp"

bool Solution::isValidSudoku(vector<vector<char>>& board) {
    vector<set<int>> rowCheck(9), colCheck(9), boardCheck(9);

    for(int i = 0 ; i < 9 ; i++) {
        for(int j = 0 ; j < 9 ; j++) {
            if(board[i][j] == '.')
                continue;

            int c = board[i][j] - '0';
            int boardIndex = (i / 3) * 3 + (j / 3);

            if(rowCheck[i].count(c) || colCheck[j].count(c) || boardCheck[boardIndex].count(c)) {
                return false;
            }

            rowCheck[i].insert(c);
            colCheck[j].insert(c);
            boardCheck[boardIndex].insert(c);
        }
    }

    return true;
}

