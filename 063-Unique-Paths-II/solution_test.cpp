#include <catch2/catch_test_macros.hpp>
#include <catch2/matchers/catch_matchers_string.hpp>
#include <catch2/matchers/catch_matchers_vector.hpp>

#include "solution.hpp"


TEST_CASE( "Running solution test 1" ) {
    vector<vector<int>> obstacleGrid{
        {0,0,0},
        {0,1,0},
        {0,0,0}
    };
    int result = Solution().uniquePathsWithObstacles(obstacleGrid);

    int expected = 2;

    REQUIRE( result == expected );
}

TEST_CASE( "Running solution test 2" ) {
    vector<vector<int>> obstacleGrid{
        {1}
    };
    int result = Solution().uniquePathsWithObstacles(obstacleGrid);

    int expected = 0;

    REQUIRE( result == expected );
}

TEST_CASE( "Running solution test 3" ) {
    vector<vector<int>> obstacleGrid{
        {1,0}
    };
    int result = Solution().uniquePathsWithObstacles(obstacleGrid);

    int expected = 0;

    REQUIRE( result == expected );
}

TEST_CASE( "Running solution test 4" ) {
    vector<vector<int>> obstacleGrid{
        {0,0},
        {1,0}
    };
    int result = Solution().uniquePathsWithObstacles(obstacleGrid);

    int expected = 1;

    REQUIRE( result == expected );
}

TEST_CASE( "Running solution test 5" ) {
    vector<vector<int>> obstacleGrid{
        {0,0},
        {1,1},
        {0,0}
    };
    int result = Solution().uniquePathsWithObstacles(obstacleGrid);

    int expected = 0;

    REQUIRE( result == expected );
}
