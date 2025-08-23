#include <catch2/catch_test_macros.hpp>
#include <catch2/matchers/catch_matchers_string.hpp>
#include <catch2/matchers/catch_matchers_vector.hpp>

#include "solution.hpp"


TEST_CASE( "Running solution test 1" ) {
    string s = "aa";
    string p = "a";
    bool result = Solution().isMatch(s, p);

    bool expected = false;
    REQUIRE( result == expected );
}

TEST_CASE( "Running solution test 2" ) {
    string s = "aa";
    string p = "*";
    bool result = Solution().isMatch(s, p);

    bool expected = true;
    REQUIRE( result == expected );
}

TEST_CASE( "Running solution test 3" ) {
    string s = "cb";
    string p = "?a";
    bool result = Solution().isMatch(s, p);

    bool expected = false;
    REQUIRE( result == expected );
}

TEST_CASE( "Running solution test 4" ) {
    string s = "adceb";
    string p = "*a*b";
    bool result = Solution().isMatch(s, p);

    bool expected = true;
    REQUIRE( result == expected );
}

TEST_CASE( "Running solution test 5" ) {
    string s = "acdcb";
    string p = "a*c?b";
    bool result = Solution().isMatch(s, p);

    bool expected = false;
    REQUIRE( result == expected );
}

TEST_CASE( "Running solution test 6" ) {
    string s = "aac";
    string p = "*?*ac";
    bool result = Solution().isMatch(s, p);

    bool expected = true;
    REQUIRE( result == expected );
}
