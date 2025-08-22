#include <catch2/catch_test_macros.hpp>
#include <catch2/matchers/catch_matchers_string.hpp>
#include <catch2/matchers/catch_matchers_vector.hpp>

#include "solution.hpp"


TEST_CASE( "Running solution test 1" ) {
    string haystack = "hello", needle = "ll";

    int result = Solution().strStr(haystack, needle);

    int expected = 2;

    REQUIRE( result == expected );
}

TEST_CASE( "Running solution test 2" ) {
    string haystack = "aaaaa", needle = "bba";

    int result = Solution().strStr(haystack, needle);

    int expected = -1;

    REQUIRE( result == expected );
}

TEST_CASE( "Running solution test 3" ) {
    string haystack = "a", needle = "a";

    int result = Solution().strStr(haystack, needle);

    int expected = 0;

    REQUIRE( result == expected );
}

TEST_CASE( "Running solution test 4" ) {
    string haystack = "ab", needle = "ab";

    int result = Solution().strStr(haystack, needle);

    int expected = 0;

    REQUIRE( result == expected );
}

TEST_CASE( "Running solution test 5" ) {
    string haystack = "mississippi", needle = "issip";

    int result = Solution().strStr(haystack, needle);

    int expected = 4;

    REQUIRE( result == expected );
}

TEST_CASE( "Running solution test 6" ) {
    string haystack = "aaa", needle = "aaa";

    int result = Solution().strStr(haystack, needle);

    int expected = 0;

    REQUIRE( result == expected );
}
