#include "solution.hpp"

int Solution::evalRPN(vector<string>& tokens) {
    if (tokens.size() == 1)
        return stoi(tokens[0]);
    int a, b, x = 0;
    stack<int> nums;
    set<string> operators{"+", "-", "*", "/"};
    while (x < tokens.size()) {
        if (operators.find(tokens[x]) == operators.end()) {
            nums.push(stoi(tokens[x]));
        } else {
            b = nums.top();
            nums.pop();
            a = nums.top();
            nums.pop();
            if (tokens[x] == "+") {
                nums.push(a + b);
            } else if (tokens[x] == "-") {
                nums.push(a - b);
            } else if (tokens[x] == "*") {
                nums.push(a * b);
            } else {
                nums.push(a / b);
            }
        }
        x++;
    }
    return nums.top();
}
