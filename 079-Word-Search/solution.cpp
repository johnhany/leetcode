#include "solution.hpp"

bool Solution::exist(vector<vector<char>>& board, string word) {
	if (board.empty() || word.empty()) return false;
	int h = board.size(), w = board[0].size();
	vector<vector<bool>> flag(h, vector<bool>(w, false));
	bool found = false;
	for (int i = 0; i < h; ++i) {
		for (int j = 0; j < w; ++j) {
			if (findWord(board, flag, i, j, word, 0)) {
				found = true;
				break;
			}
		}
		if (found)
			break;
	}
	return found;
}

bool Solution::findWord(vector<vector<char>>& board, vector<vector<bool>>& flag,
					    int x, int y, string word, int i) {
	if (board[x][y] == word[i]) {
		if (i == word.size()-1)
			return true;
		flag[x][y] = true;
		if (x > 0 && !flag[x-1][y])
			if (findWord(board, flag, x-1, y, word, i+1))
				return true;
		if (x < board.size()-1 && !flag[x+1][y])
			if (findWord(board, flag, x+1, y, word, i+1))
				return true;
		if (y > 0 && !flag[x][y-1])
			if (findWord(board, flag, x, y-1, word, i+1))
				return true;
		if (y < board[0].size()-1 && !flag[x][y+1])
			if (findWord(board, flag, x, y+1, word, i+1))
				return true;
		flag[x][y] = false;
	}
	return false;
}
