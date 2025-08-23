#include "solution.hpp"

vector<vector<int>> Solution::merge(vector<vector<int>>& intervals) {
    vector<vector<int>> ans;
    sort(intervals.begin(), intervals.end());
    // sort(intervals.begin(), intervals.end(), [](vector<int>& lhs, vector<int>& rhs){
    //         if (lhs[0] < rhs[0]) return true;
    //         else if (lhs[0] > rhs[0]) return false;
    //         else if (lhs[1] < rhs[1]) return true;
    //         else return false;
    //     });
    for (int i = 0; i < intervals.size(); i++) {
        int start = intervals[i][0];
        int end = intervals[i][1];
        int j = i + 1;
        while (j < intervals.size() && intervals[j][0] <= end) {
            end = max(intervals[j][1], end);
            j++;
        }
        i = j-1;
        ans.push_back({start, end});
    }
    return ans;
}
