#define BOOST_TEST_MODULE SolutionTest

#include "solution.hpp"

//#define BOOST_TEST_DYN_LINK
#include <boost/test/unit_test.hpp>

BOOST_AUTO_TEST_SUITE(SolutionSuite)

BOOST_AUTO_TEST_CASE(PlainTest1)
{
    vector<vector<int>> matrix{
        {1,   3,  5,  7},
        {10, 11, 16, 20},
        {23, 30, 34, 50}
    };
    int target = 3;
    bool results = Solution().searchMatrix(matrix, target);

    bool expected = true;

    BOOST_CHECK_EQUAL(results, expected);
}

BOOST_AUTO_TEST_CASE(PlainTest2)
{
    vector<vector<int>> matrix{
        {1,   3,  5,  7},
        {10, 11, 16, 20},
        {23, 30, 34, 50}
    };
    int target = 13;
    bool results = Solution().searchMatrix(matrix, target);

    bool expected = false;

    BOOST_CHECK_EQUAL(results, expected);
}

BOOST_AUTO_TEST_CASE(PlainTest3)
{
    vector<vector<int>> matrix{
        {1,   3,  5,  7},
        {10, 11, 16, 20},
        {23, 30, 34, 50}
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

BOOST_AUTO_TEST_SUITE_END()