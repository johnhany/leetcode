#include "solution.hpp"

int Solution::mySqrt(int x) {
    if (x == 0 || x == 1) {
        return x;
    }
    return findSqrt(x, 1, x);
}

int Solution::findSqrt(int x, int left, int right) {
    if (right - left == 1) {
        return left;
    }
    int a = left + (right - left) / 2;
    int b = x / a;
    if (a == b) {
        return a;
    } else if (a > b) {
        return findSqrt(x, left, a);
    } else {
        return findSqrt(x, a, right);
    }
}
