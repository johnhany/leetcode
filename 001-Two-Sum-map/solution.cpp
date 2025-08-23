#include "solution.hpp"


vector<int> Solution::twoSum(vector<int>& nums, int target) {
    unordered_map<int, int> hash;
    for (int i = 0; i < nums.size(); i++) {
        int residual = target - nums[i];
        if (hash.find(residual) != hash.end()) {
            return {hash[residual], i};
        }
        hash[nums[i]] = i;
    }
    return {};
}

