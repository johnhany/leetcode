#include "solution.hpp"

int Solution::climbStairs(int n) {
    int a = 0, b = 1;
    int rst;
    while (n) {
        rst = a + b;
        a = b;
        b = rst;
        n--;
    }
    return rst;
}
