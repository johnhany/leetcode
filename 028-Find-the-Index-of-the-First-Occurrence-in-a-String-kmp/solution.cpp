#include "solution.hpp"

// https://www.zhihu.com/question/21923021/answer/281346746

vector<int> Solution::partialMatchTable(string needle) {
    vector<int> table(needle.size()+1, 0);
    table[0] = -1;
    int i = 0, j = -1;

    while (i < (int)needle.size()) {
        if (j == -1 || needle[i] == needle[j]) {
            ++i;
            ++j;
            table[i] = j;
        } else {
            j = table[j];
        }
    }
    return table;
}


int Solution::strStr(string haystack, string needle) {
    if (needle.empty())
        return 0;
    vector<int> pmt = partialMatchTable(needle);
    int n = haystack.size(), m = needle.size();
    int i = 0, j = 0;
    while (i < n && j < m) {
        if (j == -1 || haystack[i] == needle[j]) {
            i++;
               j++;
        } else {
            j = pmt[j];
        }
    }

    if (j == m)
       return i - j;
    else
       return -1;
}
