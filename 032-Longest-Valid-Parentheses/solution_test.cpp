#include <catch2/catch_test_macros.hpp>
#include <catch2/matchers/catch_matchers_string.hpp>
#include <catch2/matchers/catch_matchers_vector.hpp>

#include "solution.hpp"


TEST_CASE( "Running solution test 1" ) {
    string s = "(()";

    int result = Solution().longestValidParentheses(s);

    int expected = 2;

    REQUIRE( result == expected );
}

TEST_CASE( "Running solution test 2" ) {
    string s = ")()())";

    int result = Solution().longestValidParentheses(s);

    int expected = 4;

    REQUIRE( result == expected );
}

TEST_CASE( "Running solution test 3" ) {
    string s = "(()())()";

    int result = Solution().longestValidParentheses(s);

    int expected = 8;

    REQUIRE( result == expected );
}

TEST_CASE( "Running solution test 4" ) {
    string s = ")()())()()(";

    int result = Solution().longestValidParentheses(s);

    int expected = 4;

    REQUIRE( result == expected );
}
