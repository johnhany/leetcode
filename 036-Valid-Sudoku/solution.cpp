#include "solution.hpp"

static auto x = []() {
	// turn off sync
	std::ios::sync_with_stdio(false);
	// untie in/out streams
	cin.tie(NULL);
	return 0;
}();

bool Solution::isValidSudoku(vector<vector<char>>& board) {
	vector<set<int>> rows(9, set<int>{});
	vector<set<int>> cols(9, set<int>{});
	vector<set<int>> boxes(9, set<int>{});
	for (int i = 0; i < 9; ++i) {
		for (int j = 0; j < 9; ++j) {
			int var = board[i][j]!='.' ? board[i][j]-'0' : -1;
			if (var >= 0) {
				// check row
				set<int>::iterator irow = rows[i].lower_bound(var);
				if (irow != rows[i].end() && var == *irow)
					return false;
				else
					rows[i].insert(irow, var);
				// check column
				set<int>::iterator icol = cols[j].lower_bound(var);
				if (icol != cols[j].end() && var == *icol)
					return false;
				else
					cols[j].insert(icol, var);
				// check box
				int bidx = (int)(i/3)*3 + j/3;
				set<int>::iterator ibox = boxes[bidx].lower_bound(var);
				if (ibox != boxes[bidx].end() && var == *ibox)
					return false;
				else
					boxes[bidx].insert(ibox, var);
			}
		}
	}
	return true;
}

