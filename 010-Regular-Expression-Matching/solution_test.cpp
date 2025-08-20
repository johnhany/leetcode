#include <catch2/catch_test_macros.hpp>
#include <catch2/matchers/catch_matchers_string.hpp>
#include <catch2/matchers/catch_matchers_vector.hpp>

#include "solution.hpp"


TEST_CASE( "Running solution test 1" ) {
    string s = "aa";
    string p = "a";

    bool expected = false;

    REQUIRE( Solution().isMatch(s, p) == expected );
}

TEST_CASE( "Running solution test 2" ) {
    string s = "aa";
    string p = "a*";

    bool expected = true;

    REQUIRE( Solution().isMatch(s, p) == expected );
}

TEST_CASE( "Running solution test 3" ) {
    string s = "ab";
    string p = ".*";

    bool expected = true;

    REQUIRE( Solution().isMatch(s, p) == expected );
}

TEST_CASE( "Running solution test 4" ) {
    string s = "aab";
    string p = "c*a*b";

    bool expected = true;

    REQUIRE( Solution().isMatch(s, p) == expected );
}

TEST_CASE( "Running solution test 5" ) {
    string s = "mississippi";
    string p = "mis*is*p*.";

    bool expected = false;

    REQUIRE( Solution().isMatch(s, p) == expected );
}
