#include <catch2/catch_test_macros.hpp>
#include <catch2/matchers/catch_matchers_floating_point.hpp>
#include <catch2/matchers/catch_matchers_string.hpp>
#include <catch2/matchers/catch_matchers_vector.hpp>

#include "solution.hpp"


TEST_CASE( "Running solution test 1" ) {
    double x = 2.0;
    int n = 10;
    double result = Solution().myPow(x, n);

    double expected = 1024.0;

    REQUIRE_THAT( expected, Catch::Matchers::WithinAbs(result, 0.01) );
}

TEST_CASE( "Running solution test 2" ) {
    double x = 2.1;
    int n = 3;
    double result = Solution().myPow(x, n);

    double expected = 9.261;

    REQUIRE_THAT( expected, Catch::Matchers::WithinAbs(result, 0.01) );
}

TEST_CASE( "Running solution test 3" ) {
    double x = 2.0;
    int n = -2;
    double result = Solution().myPow(x, n);

    double expected = 0.25;

    REQUIRE_THAT( expected, Catch::Matchers::WithinAbs(result, 0.01) );
}

TEST_CASE( "Running solution test 4" ) {
    double x = 1.0;
    int n = -2147483648;
    double result = Solution().myPow(x, n);

    double expected = 1.0;

    REQUIRE_THAT( expected, Catch::Matchers::WithinAbs(result, 0.01) );
}

TEST_CASE( "Running solution test 5" ) {
    double x = 2;
    int n = 5;
    double result = Solution().myPow(x, n);

    double expected = 32.0;

    REQUIRE_THAT( expected, Catch::Matchers::WithinAbs(result, 0.01) );
}
