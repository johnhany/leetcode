static auto x = [](){
    // turn off sync
    std::ios::sync_with_stdio(false);
    // untie in/out streams
    cin.tie(NULL);
    return 0;
}();

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> hash;
        for (int idx=0; idx < nums.size(); idx++) {
            int var = target - nums[idx];
            auto search = hash.find(var);
            if (search == hash.end()) {
                hash.insert(pair<int, int>(nums[idx], idx));
            } else {
                int res[] = {search->second, idx};
                return vector<int>(res, res + sizeof(res) / sizeof(res[0]));
            }
        }
    }
};
