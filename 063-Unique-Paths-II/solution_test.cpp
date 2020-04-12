#define BOOST_TEST_MODULE SolutionTest

#include "solution.hpp"

//#define BOOST_TEST_DYN_LINK
#include <boost/test/unit_test.hpp>

BOOST_AUTO_TEST_SUITE(SolutionSuite)

BOOST_AUTO_TEST_CASE(PlainTest1)
{
    vector<vector<int>> obstacleGrid{
        {0,0,0},
        {0,1,0},
        {0,0,0}
    };
    int result = Solution().uniquePathsWithObstacles(obstacleGrid);

    int expected = 2;

    BOOST_CHECK_EQUAL(result, expected);
}

BOOST_AUTO_TEST_CASE(PlainTest2)
{
    vector<vector<int>> obstacleGrid{
        {1}
    };
    int result = Solution().uniquePathsWithObstacles(obstacleGrid);

    int expected = 0;

    BOOST_CHECK_EQUAL(result, expected);
}

BOOST_AUTO_TEST_CASE(PlainTest3)
{
    vector<vector<int>> obstacleGrid{
        {1,0}
    };
    int result = Solution().uniquePathsWithObstacles(obstacleGrid);

    int expected = 0;

    BOOST_CHECK_EQUAL(result, expected);
}

BOOST_AUTO_TEST_CASE(PlainTest4)
{
    vector<vector<int>> obstacleGrid{
        {0,0},
        {1,0}
    };
    int result = Solution().uniquePathsWithObstacles(obstacleGrid);

    int expected = 1;

    BOOST_CHECK_EQUAL(result, expected);
}

BOOST_AUTO_TEST_CASE(PlainTest5)
{
    vector<vector<int>> obstacleGrid{
        {0,0},
        {1,1},
        {0,0}
    };
    int result = Solution().uniquePathsWithObstacles(obstacleGrid);

    int expected = 0;

    BOOST_CHECK_EQUAL(result, expected);
}

BOOST_AUTO_TEST_SUITE_END()