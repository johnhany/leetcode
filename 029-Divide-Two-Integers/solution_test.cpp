#include <catch2/catch_test_macros.hpp>
#include <catch2/matchers/catch_matchers_string.hpp>
#include <catch2/matchers/catch_matchers_vector.hpp>

#include "solution.hpp"


TEST_CASE( "Running solution test 1" ) {
    int dividend = 10, divisor = 3;

    int result = Solution().divide(dividend, divisor);

    int expected = 3;

    REQUIRE( result == expected );
}

TEST_CASE( "Running solution test 2" ) {
    int dividend = 7, divisor = -3;

    int result = Solution().divide(dividend, divisor);

    int expected = -2;

    REQUIRE( result == expected );
}

TEST_CASE( "Running solution test 3" ) {
    int dividend = -2147483648, divisor = 1;

    int result = Solution().divide(dividend, divisor);

    int expected = -2147483648;

    REQUIRE( result == expected );
}

TEST_CASE( "Running solution test 4" ) {
    int dividend = 2147483647, divisor = 1;

    int result = Solution().divide(dividend, divisor);

    int expected = 2147483647;

    REQUIRE( result == expected );
}

TEST_CASE( "Running solution test 5" ) {
    int dividend = 256, divisor = 2147483647;

    int result = Solution().divide(dividend, divisor);

    int expected = 0;

    REQUIRE( result == expected );
}

TEST_CASE( "Running solution test 6" ) {
    int dividend = -2147483648, divisor = -1;

    int result = Solution().divide(dividend, divisor);

    int expected = 2147483647;

    REQUIRE( result == expected );
}

TEST_CASE( "Running solution test 7" ) {
    int dividend = 1004958205, divisor = -2137325331;

    int result = Solution().divide(dividend, divisor);

    int expected = 0;

    REQUIRE( result == expected );
}

TEST_CASE( "Running solution test 8" ) {
    int dividend = -1021989372, divisor = -82778243;

    int result = Solution().divide(dividend, divisor);

    int expected = 12;

    REQUIRE( result == expected );
}

TEST_CASE( "Running solution test 9" ) {
    int dividend = 2147483647, divisor = 256;

    int result = Solution().divide(dividend, divisor);

    int expected = 8388607;

    REQUIRE( result == expected );
}

TEST_CASE( "Running solution test 10" ) {
    int dividend = -2147483648, divisor = 255;

    int result = Solution().divide(dividend, divisor);

    int expected = -8421504;

    REQUIRE( result == expected );
}

TEST_CASE( "Running solution test 11" ) {
    int dividend = 2147483647, divisor = 2;

    int result = Solution().divide(dividend, divisor);

    int expected = 1073741823;

    REQUIRE( result == expected );
}

TEST_CASE( "Running solution test 12" ) {
    int dividend = -2147483648, divisor = -1109186033;

    int result = Solution().divide(dividend, divisor);

    int expected = 1;

    REQUIRE( result == expected );
}

TEST_CASE( "Running solution test 13" ) {
    int dividend = -2147483648, divisor = 1262480350;

    int result = Solution().divide(dividend, divisor);

    int expected = -1;

    REQUIRE( result == expected );
}

TEST_CASE( "Running solution test 14" ) {
    int dividend = -2147483648, divisor = 2;

    int result = Solution().divide(dividend, divisor);

    int expected = -1073741824;

    REQUIRE( result == expected );
}
