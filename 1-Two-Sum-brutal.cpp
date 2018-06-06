class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for (int idx1 = 0; idx1 < nums.size() - 1; idx1++) {
            for (int idx2 = idx1 + 1; idx2 < nums.size(); idx2++) {
                if (nums[idx1] + nums[idx2] == target) {
                    int res[] = {idx1, idx2};
                    return vector<int>(res, res + sizeof(res) / sizeof(res[0]));
                }
            }
        }
    }
};
