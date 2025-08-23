#include <catch2/catch_test_macros.hpp>
#include <catch2/matchers/catch_matchers_string.hpp>
#include <catch2/matchers/catch_matchers_vector.hpp>

#include "solution.hpp"


TEST_CASE( "Running solution test 1" ) {
    int n = 5;
    int results = Solution().firstBadVersion(n);

    int expected = 4;

    REQUIRE( results == expected );
}
