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
    vector<int> candidates{10,1,2,7,6,1,5};
    int target = 8;
    vector<vector<int>> result = Solution().combinationSum2(candidates, target);

    vector<vector<int>> expected{
        {1,7},
        {1,2,5},
        {2,6},
        {1,1,6}
    };

    sort(result.begin(), result.end(), less_than_key());
    sort(expected.begin(), expected.end(), less_than_key());

    for (int i = 0; i < result.size(); i++) {
        REQUIRE_THAT( expected[i], Catch::Matchers::Equals(result[i]) );
    }
}

TEST_CASE( "Running solution test 2" ) {
    vector<int> candidates{2,5,2,1,2};
    int target = 5;
    vector<vector<int>> result = Solution().combinationSum2(candidates, target);

    vector<vector<int>> expected{
        {5},
        {1,2,2}
    };

    sort(result.begin(), result.end(), less_than_key());
    sort(expected.begin(), expected.end(), less_than_key());

    for (int i = 0; i < result.size(); i++) {
        REQUIRE_THAT( expected[i], Catch::Matchers::Equals(result[i]) );
    }
}
