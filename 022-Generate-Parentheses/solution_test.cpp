#include <catch2/catch_test_macros.hpp>
#include <catch2/matchers/catch_matchers_string.hpp>
#include <catch2/matchers/catch_matchers_vector.hpp>

#include "solution.hpp"


TEST_CASE( "Running solution test 1" ) {
    int n = 3;
    vector<string> result = Solution().generateParenthesis(n);

    vector<string> expected{
        "((()))",
        "(()())",
        "(())()",
        "()(())",
        "()()()"
    };

    sort(result.begin(), result.end());
    sort(expected.begin(), expected.end());

    REQUIRE( result.size() == expected.size() );

    REQUIRE_THAT( result, Catch::Matchers::Equals(expected) );
}

TEST_CASE( "Running solution test 2" ) {
    int n = 0;
    vector<string> result = Solution().generateParenthesis(n);

    vector<string> expected{};

    sort(result.begin(), result.end());
    sort(expected.begin(), expected.end());

    REQUIRE( result.size() == expected.size() );

    REQUIRE_THAT( result, Catch::Matchers::Equals(expected) );
}
