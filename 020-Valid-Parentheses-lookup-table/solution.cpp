#include "solution.hpp"
#include <stack>

bool Solution::isValid(string s) {
    std::stack<char> q;
    std::unordered_map<char,char> lut{{'(',')'}, {'{','}'}, {'[',']'}};
    for (char c: s) {
        if (lut.find(c) != lut.end()) {
            q.push(c);
            continue;
        }
        if (!q.empty()) {
            auto itr = lut.find(q.top());
            if (itr != lut.end() && itr->second == c) {
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
