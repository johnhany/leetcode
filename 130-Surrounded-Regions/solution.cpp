#include "solution.hpp"

static auto x = []() {
	// turn off sync
	std::ios::sync_with_stdio(false);
	// untie in/out streams
	cin.tie(NULL);
	return 0;
}();


void Solution::flood(vector<vector<char>>& board, int i, int j) {
	if (i < 0 || i >= board.size() || j < 0 || j >= board[0].size() || board[i][j] != 'O')
		return;
	board[i][j] = 't';
	flood(board, i-1, j);
	flood(board, i+1, j);
	flood(board, i, j-1);
	flood(board, i, j+1);
	return;
}

void Solution::solve(vector<vector<char>>& board) {
	if (board.size() <= 2 || board[0].size() <= 2) return;
	int rows = board.size(), cols = board[0].size();
	for (int i = 0; i < rows; i++) {
		if (board[i][0] == 'O')
			flood(board, i, 0);
		if (board[i][cols-1] == 'O')
			flood(board, i, cols-1);
	}
	for (int j = 1; j < cols-1; j++) {
		if (board[0][j] == 'O')
			flood(board, 0, j);
		if (board[rows-1][j] == 'O')
			flood(board, rows-1, j);
	}
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j< cols; j++) {
			if (board[i][j] == 'O')
				board[i][j] = 'X';
			if (board[i][j] == 't')
				board[i][j] = 'O';
		}
	}
	return;
}
