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
    vector<int> nums{1, 0, -1, 0, -2, 2};
    int target = 0;
    vector<vector<int>> results = Solution().fourSum(nums, target);

    vector<vector<int>> expected{{-1, 0, 0, 1}, {-2, -1, 1, 2}, {-2, 0, 0, 2}};

    sort(results.begin(), results.end(), less_than_key());
    sort(expected.begin(), expected.end(), less_than_key());

    REQUIRE( results.size() == expected.size() );

    for (int i = 0; i < results.size(); i++)
        REQUIRE_THAT( results[i], Catch::Matchers::Equals(expected[i]) );
}

TEST_CASE( "Running solution test 2" ) {
    vector<int> nums{};
    int target = 0;
    vector<vector<int>> results = Solution().fourSum(nums, target);

    vector<vector<int>> expected{};

    sort(results.begin(), results.end(), less_than_key());
    sort(expected.begin(), expected.end(), less_than_key());

    REQUIRE( results.size() == expected.size() );

    for (int i = 0; i < results.size(); i++)
        REQUIRE_THAT( results[i], Catch::Matchers::Equals(expected[i]) );
}

TEST_CASE( "Running solution test 3" ) {
    vector<int> nums{-1, 0, 1, 2, 3, 8};
    int target = 14;
    vector<vector<int>> results = Solution().fourSum(nums, target);

    vector<vector<int>> expected{{1, 2, 3, 8}};

    sort(results.begin(), results.end(), less_than_key());
    sort(expected.begin(), expected.end(), less_than_key());

    REQUIRE( results.size() == expected.size() );

    for (int i = 0; i < results.size(); i++)
        REQUIRE_THAT( results[i], Catch::Matchers::Equals(expected[i]) );
}

TEST_CASE( "Running solution test 4" ) {
    vector<int> nums{-2, -1, 0, 1, 2, 3, 8};
    int target = 11;
    vector<vector<int>> results = Solution().fourSum(nums, target);

    vector<vector<int>> expected{{-2, 2, 3, 8}, {-1, 1, 3, 8}, {0, 1, 2, 8}};

    sort(results.begin(), results.end(), less_than_key());
    sort(expected.begin(), expected.end(), less_than_key());

    REQUIRE( results.size() == expected.size() );

    for (int i = 0; i < results.size(); i++)
        REQUIRE_THAT( results[i], Catch::Matchers::Equals(expected[i]) );
}

TEST_CASE( "Running solution test 5" ) {
    vector<int> nums{-3, -1, 0, 2, 4, 5};
    int target = 2;
    vector<vector<int>> results = Solution().fourSum(nums, target);

    vector<vector<int>> expected{{-3, -1, 2, 4}};

    sort(results.begin(), results.end(), less_than_key());
    sort(expected.begin(), expected.end(), less_than_key());

    REQUIRE( results.size() == expected.size() );

    for (int i = 0; i < results.size(); i++)
        REQUIRE_THAT( results[i], Catch::Matchers::Equals(expected[i]) );
}

TEST_CASE( "Running solution test 6" ) {
    vector<int> nums{-1, 0, 1, 2, -1, -4};
    int target = -1;
    vector<vector<int>> results = Solution().fourSum(nums, target);

    vector<vector<int>> expected{{-4, 0, 1, 2}, {-1, -1, 0, 1}};

    sort(results.begin(), results.end(), less_than_key());
    sort(expected.begin(), expected.end(), less_than_key());

    REQUIRE( results.size() == expected.size() );

    for (int i = 0; i < results.size(); i++)
        REQUIRE_THAT( results[i], Catch::Matchers::Equals(expected[i]) );
}

TEST_CASE( "Running solution test 7" ) {
    vector<int> nums{-3, -2, -1, 0, 0, 1, 2, 3};
    int target = 0;
    vector<vector<int>> results = Solution().fourSum(nums, target);

    vector<vector<int>> expected{{-3,-2,2,3}, {-3,-1,1,3}, {-3,0,0,3}, {-3,0,1,2},
                                 {-2,-1,0,3}, {-2,-1,1,2}, {-2,0,0,2}, {-1,0,0,1}};

    sort(results.begin(), results.end(), less_than_key());
    sort(expected.begin(), expected.end(), less_than_key());

    REQUIRE( results.size() == expected.size() );

    for (int i = 0; i < results.size(); i++)
        REQUIRE_THAT( results[i], Catch::Matchers::Equals(expected[i]) );
}

TEST_CASE( "Running solution test 8" ) {
    vector<int> nums{1, -2, -5, -4, -3, 3, 3, 5};
    int target = -11;
    vector<vector<int>> results = Solution().fourSum(nums, target);

    vector<vector<int>> expected{{-5, -4, -3, 1}};

    sort(results.begin(), results.end(), less_than_key());
    sort(expected.begin(), expected.end(), less_than_key());

    REQUIRE( results.size() == expected.size() );

    for (int i = 0; i < results.size(); i++)
        REQUIRE_THAT( results[i], Catch::Matchers::Equals(expected[i]) );
}
