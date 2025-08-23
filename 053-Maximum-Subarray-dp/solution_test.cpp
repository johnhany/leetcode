#include <catch2/catch_test_macros.hpp>
#include <catch2/matchers/catch_matchers_string.hpp>
#include <catch2/matchers/catch_matchers_vector.hpp>

#include "solution.hpp"


TEST_CASE( "Running solution test 1" ) {
    vector<int> nums{-2,1,-3,4,-1,2,1,-5,4};
    int result = Solution().maxSubArray(nums);

    int expected = 6;

    REQUIRE( result == expected );
}

TEST_CASE( "Running solution test 2" ) {
    vector<int> nums{-2, -5, 6, -2, -3, 1, 5, -6};
    int result = Solution().maxSubArray(nums);

    int expected = 7;

    REQUIRE( result == expected );
}
