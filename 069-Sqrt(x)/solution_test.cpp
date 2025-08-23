#include <catch2/catch_test_macros.hpp>
#include <catch2/matchers/catch_matchers_string.hpp>
#include <catch2/matchers/catch_matchers_vector.hpp>

#include "solution.hpp"


TEST_CASE( "Running solution test 1" ) {
    int x = 4;
    int result = Solution().mySqrt(x);

    int expected = 2;

    REQUIRE( result == expected );
}

TEST_CASE( "Running solution test 2" ) {
    int x = 8;
    int result = Solution().mySqrt(x);

    int expected = 2;

    REQUIRE( result == expected );
}

TEST_CASE( "Running solution test 3" ) {
    int x = 1;
    int result = Solution().mySqrt(x);

    int expected = 1;

    REQUIRE( result == expected );
}

TEST_CASE( "Running solution test 4" ) {
    int x = 0;
    int result = Solution().mySqrt(x);

    int expected = 0;

    REQUIRE( result == expected );
}

TEST_CASE( "Running solution test 5" ) {
    int x = 2147395599;
    int result = Solution().mySqrt(x);

    int expected = 46339;

    REQUIRE( result == expected );
}
