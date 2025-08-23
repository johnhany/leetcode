#include "solution.hpp"

double Solution::myPow(double x, int n) {
    long exp = n;
    double result = 1.0;

    if (exp < 0)
        exp = -exp;

    while (exp > 0) {
        if (exp % 2 == 1) {
            result *= x;
            exp--;
        } else {
            x *= x;
            exp /= 2;
        }
    }

    return (n < 0) ? 1.0 / result : result;
}
