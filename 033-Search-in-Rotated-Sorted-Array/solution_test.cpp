#include <catch2/catch_test_macros.hpp>
#include <catch2/matchers/catch_matchers_string.hpp>
#include <catch2/matchers/catch_matchers_vector.hpp>

#include "solution.hpp"


TEST_CASE( "Running solution test 1" ) {
    vector<int> nums{4,5,6,7,0,1,2};
    int target = 0;

    int result = Solution().search(nums, target);

    int expected = 4;

    REQUIRE( result == expected );
}

TEST_CASE( "Running solution test 2" ) {
    vector<int> nums{4,5,6,7,0,1,2};
    int target = 3;

    int result = Solution().search(nums, target);

    int expected = -1;

    REQUIRE( result == expected );
}

TEST_CASE( "Running solution test 3" ) {
    vector<int> nums{0,1,2,4,5,6,7};
    int target = 3;

    int result = Solution().search(nums, target);

    int expected = -1;

    REQUIRE( result == expected );
}

TEST_CASE( "Running solution test 4" ) {
    vector<int> nums{0,1,2,4,5,6,7};
    int target = 5;

    int result = Solution().search(nums, target);

    int expected = 4;

    REQUIRE( result == expected );
}

TEST_CASE( "Running solution test 5" ) {
    vector<int> nums{3,1};
    int target = 0;

    int result = Solution().search(nums, target);

    int expected = -1;

    REQUIRE( result == expected );
}

TEST_CASE( "Running solution test 6" ) {
    vector<int> nums{8,9,2,3,4};
    int target = 9;

    int result = Solution().search(nums, target);

    int expected = 1;

    REQUIRE( result == expected );
}
