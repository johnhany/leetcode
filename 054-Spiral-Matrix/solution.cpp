#include "solution.hpp"

vector<int> Solution::spiralOrder(vector<vector<int>>& matrix) {
    int rows = matrix.size(), cols = matrix[0].size();
    int n = (rows+1)/2, m = (cols+1)/2;
    int k = min(n, m);
    vector<int> rst;
    for (int i = 0; i < k; i++) {
        int x = i, y = i;
        int width = cols - i*2, height = rows - i*2;
        for (int j=y; j<y+width; j++)
            rst.emplace_back(matrix[x][j]);
        if (height >= 3) {
            for (int j=x+1; j<x+height-1; j++)
                rst.emplace_back(matrix[j][y+width-1]);
        }
        if (height >= 2) {
            for (int j=y+width-1; j>=y; j--)
                rst.emplace_back(matrix[x+height-1][j]);
        }
        if (height >=3 && width >= 2) {
            for (int j=x+height-2; j>=x+1; j--)
                rst.emplace_back(matrix[j][y]);
        }
    }
    return rst;
}
