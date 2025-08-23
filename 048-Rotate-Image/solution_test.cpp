#include <catch2/catch_test_macros.hpp>
#include <catch2/matchers/catch_matchers_string.hpp>
#include <catch2/matchers/catch_matchers_vector.hpp>

#include "solution.hpp"


TEST_CASE( "Running solution test 1" ) {
    vector<vector<int>> matrix{
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    Solution().rotate(matrix);

    vector<vector<int>> expected{
        {7,4,1},
        {8,5,2},
        {9,6,3}
    };
    REQUIRE( matrix.size() == expected.size() );

    for (int i = 0; i < matrix.size(); i++)
        REQUIRE_THAT( matrix[i], Catch::Matchers::Equals(expected[i]) );
}

TEST_CASE( "Running solution test 2" ) {
    vector<vector<int>> matrix{
        { 5, 1, 9,11},
        { 2, 4, 8,10},
        {13, 3, 6, 7},
        {15,14,12,16}
    };
    Solution().rotate(matrix);

    vector<vector<int>> expected{
        {15,13, 2, 5},
        {14, 3, 4, 1},
        {12, 6, 8, 9},
        {16, 7,10,11}
    };
    REQUIRE( matrix.size() == expected.size() );

    for (int i = 0; i < matrix.size(); i++)
        REQUIRE_THAT( matrix[i], Catch::Matchers::Equals(expected[i]) );
}
