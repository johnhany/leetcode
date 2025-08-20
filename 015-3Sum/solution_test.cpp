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
        } else return false;
        return false;
    }
};

TEST_CASE( "Running solution test 1" ) {
    vector<int> nums{-1, 0, 1, 2, -1, -4};
    vector<vector<int>> results = Solution().threeSum(nums);

    vector<vector<int>> expected{{-1, 0, 1}, {-1, -1, 2}};

    sort(results.begin(), results.end(), less_than_key());
    sort(expected.begin(), expected.end(), less_than_key());

    REQUIRE( results.size() == expected.size() );

    for (int i = 0; i < results.size(); i++)
        REQUIRE_THAT( results[i], Catch::Matchers::Equals(expected[i]) );
}

TEST_CASE( "Running solution test 2" ) {
    vector<int> nums{-5, 1, 2, 3, 4};
    vector<vector<int>> results = Solution().threeSum(nums);

    vector<vector<int>> expected{{-5, 1, 4}, {-5, 2, 3}};

    sort(results.begin(), results.end(), less_than_key());
    sort(expected.begin(), expected.end(), less_than_key());

    REQUIRE( results.size() == expected.size() );

    for (int i = 0; i < results.size(); i++)
        REQUIRE_THAT( results[i], Catch::Matchers::Equals(expected[i]) );
}

TEST_CASE( "Running solution test 3" ) {
    vector<int> nums{0, 1, 2, 3, 4};
    vector<vector<int>> results = Solution().threeSum(nums);

    vector<vector<int>> expected{};

    sort(results.begin(), results.end(), less_than_key());
    sort(expected.begin(), expected.end(), less_than_key());

    REQUIRE( results.size() == expected.size() );

    for (int i = 0; i < results.size(); i++)
        REQUIRE_THAT( results[i], Catch::Matchers::Equals(expected[i]) );
}

TEST_CASE( "Running solution test 4" ) {
    vector<int> nums{};
    vector<vector<int>> results = Solution().threeSum(nums);

    vector<vector<int>> expected{};

    sort(results.begin(), results.end(), less_than_key());
    sort(expected.begin(), expected.end(), less_than_key());

    REQUIRE( results.size() == expected.size() );

    for (int i = 0; i < results.size(); i++)
        REQUIRE_THAT( results[i], Catch::Matchers::Equals(expected[i]) );
}
