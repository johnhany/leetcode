#include <catch2/catch_test_macros.hpp>
#include <catch2/matchers/catch_matchers_string.hpp>
#include <catch2/matchers/catch_matchers_vector.hpp>

#include "solution.hpp"


TEST_CASE( "Running solution test 1" ) {
    string s = "ADOBECODEBANC";
    string t = "ABC";
    string result = Solution().minWindow(s, t);

    string expected = "BANC";

    REQUIRE( result == expected );
}

TEST_CASE( "Running solution test 2" ) {
    string s = "BAC";
    string t = "A";
    string result = Solution().minWindow(s, t);

    string expected = "A";

    REQUIRE( result == expected );
}

TEST_CASE( "Running solution test 3" ) {
    string s = "APQCBABAC";
    string t = "AABC";
    string result = Solution().minWindow(s, t);

    string expected = "ABAC";

    REQUIRE( result == expected );
}

TEST_CASE( "Running solution test 4" ) {
    string s = "APQBABA";
    string t = "ABC";
    string result = Solution().minWindow(s, t);

    string expected = "";

    REQUIRE( result == expected );
}

TEST_CASE( "Running solution test 5" ) {
    string s = "BBA";
    string t = "AB";
    string result = Solution().minWindow(s, t);

    string expected = "BA";

    REQUIRE( result == expected );
}

TEST_CASE( "Running solution test 6" ) {
    string s = "aaaaaaaaaaaabbbbbcdd";
    string t = "abcdd";
    string result = Solution().minWindow(s, t);

    string expected = "abbbbbcdd";

    REQUIRE( result == expected );
}
