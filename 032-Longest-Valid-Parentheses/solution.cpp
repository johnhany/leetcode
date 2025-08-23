#include "solution.hpp"

int Solution::longestValidParentheses(string s) {
    int n = s.size(), rst = 0;
    stack<int> st;
    st.push(-1);
    for(int i=0; i<n; i++) {
        if(s[i] == '(') {
            st.push(i);
        } else {
            st.pop();
            if(!st.empty())
                rst = max(rst, i-st.top());
            else
                st.push(i);
        }
    }
    return rst;
}
