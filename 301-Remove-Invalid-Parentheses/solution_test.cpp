#include <catch2/catch_test_macros.hpp>
#include <catch2/matchers/catch_matchers_string.hpp>
#include <catch2/matchers/catch_matchers_vector.hpp>

#include "solution.hpp"


TEST_CASE( "Running solution test 1" ) {
    string s = "()())()";
    vector<string> results = Solution().removeInvalidParentheses(s);

    vector<string> expected{
        "()()()", "(())()"
    };

    REQUIRE_THAT( expected, Catch::Matchers::Equals(results) );
}

TEST_CASE( "Running solution test 2" ) {
    string s = "(a)())()";
    vector<string> results = Solution().removeInvalidParentheses(s);

    vector<string> expected{
        "(a)()()", "(a())()"
    };

    REQUIRE_THAT( expected, Catch::Matchers::Equals(results) );
}

TEST_CASE( "Running solution test 3" ) {
    string s = ")(";
    vector<string> results = Solution().removeInvalidParentheses(s);

    vector<string> expected{
        ""
    };

    REQUIRE_THAT( expected, Catch::Matchers::Equals(results) );
}
