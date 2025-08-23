#include "solution.hpp"
#include <cmath>


bool Solution::searchMatrix(vector<vector<int>>& matrix, int target) {
    if (matrix.empty() || matrix[0].empty()) return false;
    int row_start = 0, row_end = matrix.size()-1, row = 0;
    while (row_start <= row_end) {
        row = (row_start + row_end) / 2;
        if (target < matrix[row].front())
            row_end = row - 1;
        else if (target > matrix[row].back())
            row_start = row + 1;
        else
            break;
    }
    int idx_start = 0, idx_end = matrix[row].size()-1, idx = 0;
    while (idx_start <= idx_end) {
        idx = (idx_start + idx_end) / 2;
        if (target == matrix[row][idx])
            return true;
        else if (target < matrix[row][idx])
            idx_end = idx - 1;
        else
            idx_start = idx + 1;
    }
    return false;
}
