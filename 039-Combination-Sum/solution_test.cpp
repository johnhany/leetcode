#include <catch2/catch_test_macros.hpp>
#include <catch2/matchers/catch_matchers_string.hpp>
#include <catch2/matchers/catch_matchers_vector.hpp>

#include "solution.hpp"


struct less_than_key {
    inline bool operator() (const vector<int>& vec1, const vector<int>& vec2) {
        if (vec1.size() == vec2.size()) {
            for (int i = 0; i < vec1.size(); i++) {
                if (vec1[i] < vec2[i]) return true;
                else if (vec1[i] > vec2[i]) return false;
            }
            return true;
        } else if (vec1.size() < vec2.size()) {
            return true;
        } else {
            return false;
        }
    }
};

TEST_CASE( "Running solution test 1" ) {
    vector<int> candidates{2,3,6,7};
    int target = 7;
    vector<vector<int>> result = Solution().combinationSum(candidates, target);

    vector<vector<int>> expected{
        {7},
        {2,2,3}
    };

    sort(result.begin(), result.end(), less_than_key());
    sort(expected.begin(), expected.end(), less_than_key());

    for (int i = 0; i < result.size(); i++) {
        REQUIRE_THAT( expected[i], Catch::Matchers::Equals(result[i]) );
    }
}
