#include <catch2/catch_test_macros.hpp>
#include <catch2/matchers/catch_matchers_string.hpp>
#include <catch2/matchers/catch_matchers_vector.hpp>

#include "solution.hpp"


TEST_CASE( "Running solution test 1" ) {
    vector<int> nums{1,3,5,6};
    int target = 5;

    int result = Solution().searchInsert(nums, target);

    int expected = 2;

    REQUIRE( result == expected );
}

TEST_CASE( "Running solution test 2" ) {
    vector<int> nums{1,3,5,6};
    int target = 2;

    int result = Solution().searchInsert(nums, target);

    int expected = 1;

    REQUIRE( result == expected );
}

TEST_CASE( "Running solution test 3" ) {
    vector<int> nums{1,3,5,6};
    int target = 7;

    int result = Solution().searchInsert(nums, target);

    int expected = 4;

    REQUIRE( result == expected );
}

TEST_CASE( "Running solution test 4" ) {
    vector<int> nums{1,3,5,6};
    int target = 0;

    int result = Solution().searchInsert(nums, target);

    int expected = 0;

    REQUIRE( result == expected );
}
