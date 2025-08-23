#include "solution.hpp"

int Solution::trap(vector<int>& height) {
    int water = 0, left = 0;
    while (left < height.size()) {
        if (height[left] == 0) {
            ++left;
            continue;
        }
        int right = left, h = 0;;
        for (int i = left+1; i < height.size(); ++i) {
            if (height[i] >= h) {
                right = i;
                h = height[i];
            }
            if (h > height[left])
                break;
        }
        if (h == 0) break;
        int depth = h > height[left] ? height[left] : height[right];
        for (int i = left+1; i < right; ++i) {
            water += depth - height[i];
        }
        left = right;
    }
    return water;
}

