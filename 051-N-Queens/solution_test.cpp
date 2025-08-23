#include <catch2/catch_test_macros.hpp>
#include <catch2/matchers/catch_matchers_string.hpp>
#include <catch2/matchers/catch_matchers_vector.hpp>

#include "solution.hpp"



TEST_CASE( "Running solution test 1" ) {
    int n = 4;
    vector<vector<string>> results = Solution().solveNQueens(n);

    vector<vector<string>> expected{
        {".Q..",
        "...Q",
        "Q...",
        "..Q."},
        {"..Q.",
        "Q...",
        "...Q",
        ".Q.."}
    };
    REQUIRE( results.size() == expected.size() );

    for (int i = 0; i < results.size(); i++)
        REQUIRE_THAT( results[i], Catch::Matchers::Equals(expected[i]) );
}
