#include <catch2/catch_test_macros.hpp>
#include <catch2/matchers/catch_matchers_string.hpp>
#include <catch2/matchers/catch_matchers_vector.hpp>

#include "solution.hpp"


TEST_CASE( "Running solution test 1" ) {
    int n = 12;
    int results = Solution().numSquares(n);

    int expected = 3;

    REQUIRE( results == expected );
}

TEST_CASE( "Running solution test 2" ) {
    int n = 13;
    int results = Solution().numSquares(n);

    int expected = 2;

    REQUIRE( results == expected );
}

TEST_CASE( "Running solution test 3" ) {
    int n = 25;
    int results = Solution().numSquares(n);

    int expected = 1;

    REQUIRE( results == expected );
}
