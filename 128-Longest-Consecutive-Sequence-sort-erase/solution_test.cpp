#include <catch2/catch_test_macros.hpp>
#include <catch2/matchers/catch_matchers_string.hpp>
#include <catch2/matchers/catch_matchers_vector.hpp>

#include "solution.hpp"


TEST_CASE( "Running solution test 1" ) {
    vector<int> nums{100, 4, 200, 1, 3, 2};
    int results = Solution().longestConsecutive(nums);

    int expected = 4;

    REQUIRE( results == expected );
}

