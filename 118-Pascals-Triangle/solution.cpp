#include "solution.hpp"


vector<vector<int>> Solution::generate(int numRows) {
    vector<vector<int>> rst{{1}};
    for (int i=1; i<numRows; i++) {
        vector<int> row{1};
        for (int j=1; j<i+1; j++) {
            if (j==i)
                row.push_back(1);
            else
                row.push_back(rst[i-1][j-1] + rst[i-1][j]);
        }
        rst.push_back(row);
    }
    return rst;
}
