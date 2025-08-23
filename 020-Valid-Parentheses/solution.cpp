#include "solution.hpp"
#include <stack>

bool Solution::isValid(string s) {
    std::stack<char> q;
    for (char c: s) {
        if (c == '(' || c == '[' || c == '{') {
            q.push(c);
            continue;
        }
        if (!q.empty()) {
            char t = q.top();
            if ((c == ')' && t == '(') || (c == ']' && t == '[') || (c == '}' && t == '{')) {
                q.pop();
                continue;
            } else {
                return false;
            }
        } else {
            return false;
        }
    }
    if (q.empty())
        return true;
    else
        return false;
}
