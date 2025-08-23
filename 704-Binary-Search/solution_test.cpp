#include <catch2/catch_test_macros.hpp>
#include <catch2/matchers/catch_matchers_string.hpp>
#include <catch2/matchers/catch_matchers_vector.hpp>

#include "solution.hpp"


TEST_CASE( "Running solution test 1" ) {
    vector<int> nums{-1,0,3,5,9,12};
    int target = 9;
    int results = Solution().search(nums, target);

    int expected = 4;

    REQUIRE( results == expected );
}
