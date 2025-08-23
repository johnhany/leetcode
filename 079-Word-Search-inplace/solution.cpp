#include "solution.hpp"

bool Solution::exist(vector<vector<char>>& board, string word) {
    if (board.empty() || word.empty()) return false;
    h = board.size();
    w = board[0].size();
    len = word.size()-1;
    for (int x = 0; x < h; ++x)
        for (int y = 0; y < w; ++y)
            if (findWord(board, x, y, word, 0))
                return true;
    return false;
}

bool Solution::findWord(vector<vector<char>>& board, int x, int y, string& word, int i) {
    if (x < 0 || y < 0 || x >= h || y >= w || board[x][y] == '\0' || board[x][y] != word[i])
        return false;
    if (i == len)
        return true;
    char c = board[x][y];
    board[x][y] = '\0';
    if (findWord(board, x-1, y, word, i+1) || findWord(board, x+1, y, word, i+1) || findWord(board, x, y-1, word, i+1) || findWord(board, x, y+1, word, i+1))
        return true;
    board[x][y] = c;
    return false;
}
