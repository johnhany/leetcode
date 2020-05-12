#include "solution.hpp"

static auto x = []() {
	// turn off sync
	std::ios::sync_with_stdio(false);
	// untie in/out streams
	cin.tie(NULL);
	return 0;
}();

void Solution::solveSudoku(vector<vector<char>>& board) {
	vector<vector<int>> row(9, vector<int>(9, 0)), col(9, vector<int>(9, 0)), block(9, vector<int>(9, 0));
	for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            int b = board[i][j] - '1';
            if (b >= 0) {
                row[i][b] = 1;
                col[j][b] = 1;
                block[i/3*3+j/3][b] = 1;
            }
        }
	}
    fill(board, 0, 0, row, col, block);
}

bool Solution::fill(vector<vector<char>>& board, int r, int c, vector<vector<int>>& row, vector<vector<int>>& col, vector<vector<int>>& block) {
	if (c == 9) {
        c = 0;
        ++r;
    }
    if (r == 9)
        return true;
    if (board[r][c] == '.') {
        for (int k = 0; k < 9; k++) {
            if (row[r][k] == 0 && col[c][k] == 0 && block[r/3*3+c/3][k] == 0) {
                row[r][k] =  col[c][k] = block[r/3*3+c/3][k] = 1;
                board[r][c] = k + '1';
                if (!fill(board, r, c+1, row, col, block)) {
                    row[r][k] = col[c][k] = block[r/3*3+c/3][k] = 0;
                    board[r][c] = '.';
                } else
					return true;
            }
		}
		return false;
    } else
        return fill(board, r, c+1, row, col, block);
}
