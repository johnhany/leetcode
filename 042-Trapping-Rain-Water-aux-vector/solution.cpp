#include "solution.hpp"

int Solution::trap(vector<int>& height) {
    int n = height.size();
    vector<int> left(n, 0), right(n, 0);
    left[0] = height[0];
    right[n-1] = height[n-1];
    for (int i=1; i<n; i++)
        left[i] = max(left[i-1], height[i]);
    for (int i=n-2; i>=0; i--)
        right[i] = max(right[i+1], height[i]);
    int water = 0;
    for (int i=1; i<n-1; i++) {
        int h = min(left[i-1], right[i+1]);
        water += h>height[i] ? h-height[i] : 0;
    }
    return water;
}

