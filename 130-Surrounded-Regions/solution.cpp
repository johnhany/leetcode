#include "solution.hpp"


void Solution::flood(vector<vector<char>>& board, int x, int y, int rows, int cols) {
	if (x<0 || x>=rows || y<0 || y>=cols || board[x][y] != 'O')
		return;
	board[x][y] = '-';
	flood(board, x-1, y, rows, cols);
	flood(board, x+1, y, rows, cols);
	flood(board, x, y-1, rows, cols);
	flood(board, x, y+1, rows, cols);
	return;
}

void Solution::solve(vector<vector<char>>& board) {
	int rows = board.size();
	int cols = board[0].size();
	if (rows<=2 || cols<=2)
		return;

	for (int i=0; i<rows; i++) {
		if (board[i][0] == 'O')
			flood(board, i, 0, rows, cols);
		if (board[i][cols-1] == 'O')
			flood(board, i, cols-1, rows, cols);
	}
	for (int j=1; j<cols-1; j++) {
		if (board[0][j] == 'O')
			flood(board, 0, j, rows, cols);
		if (board[rows-1][j] == 'O')
			flood(board, rows-1, j, rows, cols);
	}

	for (int i=0; i<rows; i++) {
		for (int j=0; j<cols; j++) {
			if (board[i][j] == 'O')
				board[i][j] = 'X';
			if (board[i][j] == '-')
				board[i][j] = 'O';
		}
	}
	return;
}
