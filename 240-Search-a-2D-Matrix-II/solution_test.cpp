#define BOOST_TEST_MODULE SolutionTest

#include "solution.hpp"

//#define BOOST_TEST_DYN_LINK
#include <boost/test/unit_test.hpp>

BOOST_AUTO_TEST_SUITE(SolutionSuite)

BOOST_AUTO_TEST_CASE(PlainTest1)
{
    vector<vector<int>> matrix{
        {1,   4,  7, 11, 15},
        {2,   5,  8, 12, 19},
        {3,   6,  9, 16, 22},
        {10, 13, 14, 17, 24},
        {18, 21, 23, 26, 30}
    };
    int target = 5;
    bool results = Solution().searchMatrix(matrix, target);

    bool expected = true;

    BOOST_CHECK_EQUAL(results, expected);
}

BOOST_AUTO_TEST_CASE(PlainTest2)
{
    vector<vector<int>> matrix{
        {1,   4,  7, 11, 15},
        {2,   5,  8, 12, 19},
        {3,   6,  9, 16, 22},
        {10, 13, 14, 17, 24},
        {18, 21, 23, 26, 30}
    };
    int target = 20;
    bool results = Solution().searchMatrix(matrix, target);

    bool expected = false;

    BOOST_CHECK_EQUAL(results, expected);
}

BOOST_AUTO_TEST_CASE(PlainTest3)
{
    vector<vector<int>> matrix{
        {1,   4,  7, 11, 15},
        {2,   5,  8, 12, 19},
        {3,   6,  9, 16, 22},
        {10, 13, 14, 17, 24},
        {18, 21, 23, 26, 30}
    };
    int target = 0;
    bool results = Solution().searchMatrix(matrix, target);

    bool expected = false;

    BOOST_CHECK_EQUAL(results, expected);
}

BOOST_AUTO_TEST_CASE(PlainTest4)
{
    vector<vector<int>> matrix{
        {1}
    };
    int target = 1;
    bool results = Solution().searchMatrix(matrix, target);

    bool expected = true;

    BOOST_CHECK_EQUAL(results, expected);
}

BOOST_AUTO_TEST_CASE(PlainTest5)
{
    vector<vector<int>> matrix{
        {1},
        {3},
        {5}
    };
    int target = 3;
    bool results = Solution().searchMatrix(matrix, target);

    bool expected = true;

    BOOST_CHECK_EQUAL(results, expected);
}

BOOST_AUTO_TEST_CASE(PlainTest6)
{
    vector<vector<int>> matrix{
        {-1, 3},
    };
    int target = 1;
    bool results = Solution().searchMatrix(matrix, target);

    bool expected = false;

    BOOST_CHECK_EQUAL(results, expected);
}

BOOST_AUTO_TEST_CASE(PlainTest7)
{
    vector<vector<int>> matrix{
        {1,2,3,4,5},
        {6,7,8,9,10},
        {11,12,13,14,15},
        {16,17,18,19,20},
        {21,22,23,24,25}
    };
    int target = 5;
    bool results = Solution().searchMatrix(matrix, target);

    bool expected = true;

    BOOST_CHECK_EQUAL(results, expected);
}

BOOST_AUTO_TEST_CASE(PlainTest8)
{
    vector<vector<int>> matrix{
        {1,2,3,4,5},
        {6,7,8,9,10},
        {11,12,13,14,15},
        {16,17,18,19,20},
        {21,22,23,24,25}
    };
    int target = 19;
    bool results = Solution().searchMatrix(matrix, target);

    bool expected = true;

    BOOST_CHECK_EQUAL(results, expected);
}

BOOST_AUTO_TEST_SUITE_END()