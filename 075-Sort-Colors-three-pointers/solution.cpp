#include "solution.hpp"

void Solution::sortColors(vector<int>& nums) {
    int head = 0, mid = 1, tail = nums.size()-1;
    while (true) {
        while (head < nums.size() && nums[head] == 0) {
            head++;
        }
        while (tail >= 0 && nums[tail] == 2) {
            tail--;
        }
        if (head >= tail) {
            break;
        }
        if (head >= mid) {
            mid = head + 1;
        }
        if (nums[head] == 2 || nums[tail] == 0) {
            swap(nums[head], nums[tail]);
        } else {
            if (mid >= tail) {
                break;
            }
            while (mid < tail && nums[mid] == 1) {
                mid++;
            }
            if (mid < tail && nums[mid] == 0) {
                swap(nums[head], nums[mid]);
            }
            if (mid < tail && nums[mid] == 2) {
                swap(nums[tail], nums[mid]);
            }
        }
    }
    return;
}
