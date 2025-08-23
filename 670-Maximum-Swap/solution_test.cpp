#include <catch2/catch_test_macros.hpp>
#include <catch2/matchers/catch_matchers_string.hpp>
#include <catch2/matchers/catch_matchers_vector.hpp>

#include "solution.hpp"


TEST_CASE( "Running solution test 1" ) {
    int nums = 2736;
    int results = Solution().maximumSwap(nums);

    int expected = 7236;

    REQUIRE( results == expected );
}

TEST_CASE( "Running solution test 2" ) {
    int nums = 9973;
    int results = Solution().maximumSwap(nums);

    int expected = 9973;

    REQUIRE( results == expected );
}
