#include "solution.hpp"

void Solution::setZeroes(vector<vector<int>>& matrix) {
    if (matrix.empty()) return;
    int m = matrix.size(), n = matrix[0].size();
    vector<int> rows(m, 0), cols(n, 0);
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            if (matrix[i][j] == 0) {
                rows[i] = 1;
                cols[j] = 1;
            }
        }
    }
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            if (rows[i] || cols[j]) {
                matrix[i][j] = 0;
            }
        }
    }
    return;
}
