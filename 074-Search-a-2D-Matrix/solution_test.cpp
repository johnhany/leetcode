#include <catch2/catch_test_macros.hpp>
#include <catch2/matchers/catch_matchers_string.hpp>
#include <catch2/matchers/catch_matchers_vector.hpp>

#include "solution.hpp"


TEST_CASE( "Running solution test 1" ) {
    vector<vector<int>> matrix{
        {1,   3,  5,  7},
        {10, 11, 16, 20},
        {23, 30, 34, 50}
    };
    int target = 3;
    bool results = Solution().searchMatrix(matrix, target);

    bool expected = true;

    REQUIRE( results == expected );
}

TEST_CASE( "Running solution test 2" ) {
    vector<vector<int>> matrix{
        {1,   3,  5,  7},
        {10, 11, 16, 20},
        {23, 30, 34, 50}
    };
    int target = 13;
    bool results = Solution().searchMatrix(matrix, target);

    bool expected = false;

    REQUIRE( results == expected );
}

TEST_CASE( "Running solution test 3" ) {
    vector<vector<int>> matrix{
        {1,   3,  5,  7},
        {10, 11, 16, 20},
        {23, 30, 34, 50}
    };
    int target = 0;
    bool results = Solution().searchMatrix(matrix, target);

    bool expected = false;

    REQUIRE( results == expected );
}

TEST_CASE( "Running solution test 4" ) {
    vector<vector<int>> matrix{
        {1}
    };
    int target = 1;
    bool results = Solution().searchMatrix(matrix, target);

    bool expected = true;

    REQUIRE( results == expected );
}

TEST_CASE( "Running solution test 5" ) {
    vector<vector<int>> matrix{
        {1},
        {3},
        {5}
    };
    int target = 3;
    bool results = Solution().searchMatrix(matrix, target);

    bool expected = true;

    REQUIRE( results == expected );
}
