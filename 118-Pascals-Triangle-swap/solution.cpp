#include "solution.hpp"


vector<vector<int>> Solution::generate(int numRows) {
    vector<vector<int>> rst;
    vector<int> prev{1}, cur;
    for (int row = 0; row < numRows; row++) {
        cur.clear();
        cur.push_back(1);
        for (int col = 1; col < row; col++) {
            cur.push_back(prev[col-1] + prev[col]);
        }
        if (row > 0)
            cur.push_back(1);
        rst.push_back(cur);
        std::swap(cur, prev);
    }
    return rst;
}
