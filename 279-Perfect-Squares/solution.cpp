#include "solution.hpp"
#include <cmath>


int Solution::numSquares(int n) {
    // If n is sum of 4 numbers, the following must hold:
    // n = 4^a * (8*b+7)
    if (n == 0) return 1;
    int tmp = n;
    while (tmp % 4 == 0)
        tmp /= 4;
    if (tmp % 8 == 7)
        return 4;
    int a = (int)sqrt(n), a2 = a*a;
    while (a > 0) {
        if (a2 == n)
            return 1;
        int b = (int)sqrt(n - a2);
        if (a2 + b*b == n) {
            return 2;
        }
        a--;
        a2 = a*a;
    }
    return 3;
}
