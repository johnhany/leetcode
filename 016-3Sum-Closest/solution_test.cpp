#include <catch2/catch_test_macros.hpp>
#include <catch2/matchers/catch_matchers_string.hpp>
#include <catch2/matchers/catch_matchers_vector.hpp>

#include "solution.hpp"


TEST_CASE( "Running solution test 1" ) {
    vector<int> nums{-1, 2, 1, -4};
    int target = 1;

    int expected = 2;

    REQUIRE( Solution().threeSumClosest(nums, target) == expected );
}

TEST_CASE( "Running solution test 2" ) {
    vector<int> nums{-1, 0, 1, 2, 3};
    int target = 0;

    int expected = 0;

    REQUIRE( Solution().threeSumClosest(nums, target) == expected );
}

TEST_CASE( "Running solution test 3" ) {
    vector<int> nums{-1, 0, 1, 2, 3};
    int target = 10;

    int expected = 6;

    REQUIRE( Solution().threeSumClosest(nums, target) == expected );
}

TEST_CASE( "Running solution test 4" ) {
    vector<int> nums{0, 1, 2};
    int target = 3;

    int expected = 3;

    REQUIRE( Solution().threeSumClosest(nums, target) == expected );
}

TEST_CASE( "Running solution test 5" ) {
    vector<int> nums{1, 1, 1, 0};
    int target = -100;

    int expected = 2;

    REQUIRE( Solution().threeSumClosest(nums, target) == expected );
}

TEST_CASE( "Running solution test 6" ) {
    vector<int> nums{1, 2, 4, 8, 16, 32, 64, 128};
    int target = 82;

    int expected = 82;

    REQUIRE( Solution().threeSumClosest(nums, target) == expected );
}

TEST_CASE( "Running solution test 7" ) {
    vector<int> nums{-100,-98,-2,-1};
    int target = -101;

    int expected = -101;

    REQUIRE( Solution().threeSumClosest(nums, target) == expected );
}
