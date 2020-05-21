#include "solution.hpp"

static auto x = []() {
	// turn off sync
	std::ios::sync_with_stdio(false);
	// untie in/out streams
	cin.tie(NULL);
	return 0;
}();

vector<vector<string>> Solution::solveNQueens(int n) {
	vector<vector<string>> answer;
	if (n == 0)
		return answer;

	string row(n, '.');
	vector<string> board(n, row);

	vector<int> cols(n, 0);
	vector<int> up_diagonals(2 * n - 1, 0);
	vector<int> down_diagonals(2 * n - 1, 0);

	search(answer, board, cols, up_diagonals, down_diagonals, 0, n);

	return answer;
}

void Solution::search(vector<vector<string>>& answer, vector<string>& board, vector<int>& cols,
        vector<int>& up_diagonals, vector<int>& down_diagonals, int row_index, int n) {
	if (row_index == n) {
		answer.push_back(board);
		return;
	}

	std::string& row_string = board[row_index];

	for (int x = 0; x < n; x++) {
		if (cols[x] == 0) {
			int up_diagonal_index = (x + row_index);
			int down_diagonal_index = (x - row_index + n - 1);
			if (up_diagonals[up_diagonal_index] == 0 &&
				down_diagonals[down_diagonal_index] == 0) {
				row_string[x] = 'Q';
				cols[x] = 1;
				down_diagonals[down_diagonal_index] = 1;
				up_diagonals[up_diagonal_index] = 1;

				search(answer, board, cols, up_diagonals, down_diagonals, row_index + 1, n);

				row_string[x] = '.';
				cols[x] = 0;
				down_diagonals[down_diagonal_index] = 0;
				up_diagonals[up_diagonal_index] = 0;
			}
		}
	}
	return;
}
