#include <catch2/catch_test_macros.hpp>
#include <catch2/matchers/catch_matchers_string.hpp>
#include <catch2/matchers/catch_matchers_vector.hpp>

#include "solution.hpp"


TEST_CASE( "Running solution test 1" ) {
    string n = "123";
    string results = Solution().nearestPalindromic(n);

    string expected = "121";
    REQUIRE( results == expected );
}

TEST_CASE( "Running solution test 2" ) {
    string n = "1";
    string results = Solution().nearestPalindromic(n);

    string expected = "0";
    REQUIRE( results == expected );
}

TEST_CASE( "Running solution test 3" ) {
    string n = "999";
    string results = Solution().nearestPalindromic(n);

    string expected = "1001";
    REQUIRE( results == expected );
}

TEST_CASE( "Running solution test 4" ) {
    string n = "2147483647";
    string results = Solution().nearestPalindromic(n);

    string expected = "2147447412";
    REQUIRE( results == expected );
}

TEST_CASE( "Running solution test 5" ) {
    string n = "807045053224792883";
    string results = Solution().nearestPalindromic(n);

    string expected = "807045053350540708";
    REQUIRE( results == expected );
}
