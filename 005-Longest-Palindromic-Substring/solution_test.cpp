#include <catch2/catch_test_macros.hpp>
#include <catch2/matchers/catch_matchers_string.hpp>
#include <catch2/matchers/catch_matchers_vector.hpp>

#include "solution.hpp"


TEST_CASE( "Running solution test 1" ) {
    string input = "babad";

    string expected1 = "bab";
    string expected2 = "aba";

    REQUIRE_THAT( Solution().longestPalindrome(input), Catch::Matchers::Equals(expected1) || Catch::Matchers::Equals(expected2) );
}

TEST_CASE( "Running solution test 2" ) {
    string input = "cbbd";

    string expected1 = "bb";

    REQUIRE_THAT( Solution().longestPalindrome(input), Catch::Matchers::Equals(expected1) );
}
