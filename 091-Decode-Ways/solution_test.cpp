#include <catch2/catch_test_macros.hpp>
#include <catch2/matchers/catch_matchers_string.hpp>
#include <catch2/matchers/catch_matchers_vector.hpp>

#include "solution.hpp"


TEST_CASE( "Running solution test 1" ) {
    string s = "12";
    int result = Solution().numDecodings(s);

    int expected = 2;

    REQUIRE( result == expected );
}

TEST_CASE( "Running solution test 2" ) {
    string s = "226";
    int result = Solution().numDecodings(s);

    int expected = 3;

    REQUIRE( result == expected );
}
