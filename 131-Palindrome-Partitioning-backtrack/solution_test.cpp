#include <catch2/catch_test_macros.hpp>
#include <catch2/matchers/catch_matchers_string.hpp>
#include <catch2/matchers/catch_matchers_vector.hpp>

#include "solution.hpp"


TEST_CASE( "Running solution test 1" ) {
    string s = "aab";
    vector<vector<string>> results = Solution().partition(s);

    vector<vector<string>> expected{
        {"a","a","b"},
        {"aa","b"}
    };

    REQUIRE( results.size() == expected.size() );

    for (int i = 0; i < results.size(); i++)
        REQUIRE_THAT( results[i], Catch::Matchers::Equals(expected[i]) );
}
