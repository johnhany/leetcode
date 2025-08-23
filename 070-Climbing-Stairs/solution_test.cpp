#include <catch2/catch_test_macros.hpp>
#include <catch2/matchers/catch_matchers_string.hpp>
#include <catch2/matchers/catch_matchers_vector.hpp>

#include "solution.hpp"


TEST_CASE( "Running solution test 1" ) {
    int x = 2;
    int result = Solution().climbStairs(x);

    int expected = 2;

    REQUIRE( result == expected );
}

TEST_CASE( "Running solution test 2" ) {
    int x = 3;
    int result = Solution().climbStairs(x);

    int expected = 3;

    REQUIRE( result == expected );
}

TEST_CASE( "Running solution test 3" ) {
    int x = 4;
    int result = Solution().climbStairs(x);

    int expected = 5;

    REQUIRE( result == expected );
}
