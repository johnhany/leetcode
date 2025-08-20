#include <catch2/catch_test_macros.hpp>
#include <catch2/matchers/catch_matchers_string.hpp>
#include <catch2/matchers/catch_matchers_vector.hpp>

#include "solution.hpp"


TEST_CASE( "Running solution test 1" ) {
    string digits = "23";
    vector<string> result = Solution().letterCombinations(digits);

    vector<string> expected{"ad", "ae", "af", "bd", "be", "bf", "cd", "ce", "cf"};

    sort(result.begin(), result.end());
    sort(expected.begin(), expected.end());

    REQUIRE( result.size() == expected.size() );

    REQUIRE_THAT( result, Catch::Matchers::Equals(expected) );
}

TEST_CASE( "Running solution test 2" ) {
    string digits = "";
    vector<string> result = Solution().letterCombinations(digits);

    vector<string> expected{};

    sort(result.begin(), result.end());
    sort(expected.begin(), expected.end());

    REQUIRE( result.size() == expected.size() );

    REQUIRE_THAT( result, Catch::Matchers::Equals(expected) );
}
