#include <catch2/catch_test_macros.hpp>
#include <catch2/matchers/catch_matchers_string.hpp>
#include <catch2/matchers/catch_matchers_vector.hpp>

#include "solution.hpp"


TEST_CASE( "Running solution test 1" ) {
    string input = "abcabcbb";

    int expected = 3;

    REQUIRE( expected == Solution().lengthOfLongestSubstring(input) );
}

TEST_CASE( "Running solution test 2" ) {
    string input = "bbbbb";

    int expected = 1;

    REQUIRE( expected == Solution().lengthOfLongestSubstring(input) );
}

TEST_CASE( "Running solution test 3" ) {
    string input = "pwwkew";

    int expected = 3;

    REQUIRE( expected == Solution().lengthOfLongestSubstring(input) );
}
