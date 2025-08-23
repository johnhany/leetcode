#include <catch2/catch_test_macros.hpp>
#include <catch2/matchers/catch_matchers_string.hpp>
#include <catch2/matchers/catch_matchers_vector.hpp>

#include "solution.hpp"


TEST_CASE( "Running solution test 1" ) {
    vector<int> nums{1,2,5};
    int k = 11;
    int result = Solution().coinChange(nums, k);

    int expected = 3;

    REQUIRE( result == expected );
}
