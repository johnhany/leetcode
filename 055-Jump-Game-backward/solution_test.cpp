#include <catch2/catch_test_macros.hpp>
#include <catch2/matchers/catch_matchers_string.hpp>
#include <catch2/matchers/catch_matchers_vector.hpp>

#include "solution.hpp"


TEST_CASE( "Running solution test 1" ) {
    vector<int> nums{2,3,1,1,4};
    bool result = Solution().canJump(nums);

    bool expected = true;

    REQUIRE( result == expected );
}

TEST_CASE( "Running solution test 2" ) {
    vector<int> nums{3,2,1,0,4};
    bool result = Solution().canJump(nums);

    bool expected = false;

    REQUIRE( result == expected );
}

TEST_CASE( "Running solution test 3" ) {
    vector<int> nums{2,0};
    bool result = Solution().canJump(nums);

    bool expected = true;

    REQUIRE( result == expected );
}

TEST_CASE( "Running solution test 4" ) {
    vector<int> nums{1,0,2};
    bool result = Solution().canJump(nums);

    bool expected = false;

    REQUIRE( result == expected );
}

TEST_CASE( "Running solution test 5" ) {
    vector<int> nums{2,0,0};
    bool result = Solution().canJump(nums);

    bool expected = true;

    REQUIRE( result == expected );
}
