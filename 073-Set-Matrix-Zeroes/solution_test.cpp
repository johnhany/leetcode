#include <catch2/catch_test_macros.hpp>
#include <catch2/matchers/catch_matchers_string.hpp>
#include <catch2/matchers/catch_matchers_vector.hpp>

#include "solution.hpp"


TEST_CASE( "Running solution test 1" ) {
    vector<vector<int>> matrix{
        {1,1,1},
        {1,0,1},
        {1,1,1}
    };
    Solution().setZeroes(matrix);

    vector<vector<int>> expected{
        {1,0,1},
        {0,0,0},
        {1,0,1}
    };

    REQUIRE( matrix.size() == expected.size() );
    for (int i = 0; i < matrix.size(); i++)
        REQUIRE_THAT( matrix[i], Catch::Matchers::Equals(expected[i]) );
}

TEST_CASE( "Running solution test 2" ) {
    vector<vector<int>> matrix{
        {0,1,2,0},
        {3,4,5,2},
        {1,3,1,5}
    };
    Solution().setZeroes(matrix);

    vector<vector<int>> expected{
        {0,0,0,0},
        {0,4,5,0},
        {0,3,1,0}
    };

    REQUIRE( matrix.size() == expected.size() );
    for (int i = 0; i < matrix.size(); i++)
        REQUIRE_THAT( matrix[i], Catch::Matchers::Equals(expected[i]) );
}
