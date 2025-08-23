#include "solution.hpp"


string Solution::longestPalindrome(string s) {
    string t = "^#";
    for (int i=0; i<s.size(); i++) {
        t += s[i];
        t += "#";
    }
    //t += '$';
    vector<int> p(t.size(), 0);
    int R = 0, C = 0, maxLen = 0, maxC = 0;
    for (int i=1; i<t.size(); i++) {
        p[i] = R > i ? min(p[2 * C - i], R - i) : 1;
        while (t[i + p[i]] == t[i - p[i]])
            p[i]++;
        if (R < i + p[i]) {
            R = i + p[i];
            C = i;
        }
        if (maxLen < p[i]) {
            maxLen = p[i];
            maxC = i;
        }
    }
    return s.substr((maxC - maxLen) / 2, maxLen - 1);
}
