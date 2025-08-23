#include <catch2/catch_test_macros.hpp>
#include <catch2/matchers/catch_matchers_string.hpp>
#include <catch2/matchers/catch_matchers_vector.hpp>

#include "solution.hpp"


TEST_CASE( "Running solution test 1" ) {
    int m = 3, n = 2;
    int result = Solution().uniquePaths(m, n);

    int expected = 3;

    REQUIRE( result == expected );
}

TEST_CASE( "Running solution test 2" ) {
    int m = 7, n = 3;
    int result = Solution().uniquePaths(m, n);

    int expected = 28;

    REQUIRE( result == expected );
}
