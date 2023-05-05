#define BOOST_TEST_MODULE SolutionTest

#include "solution.hpp"

//#define BOOST_TEST_DYN_LINK
#include <boost/test/unit_test.hpp>

BOOST_AUTO_TEST_SUITE(SolutionSuite)

BOOST_AUTO_TEST_CASE(PlainTest1)
{
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
    BOOST_CHECK_EQUAL(matrix.size(), expected.size());
    for (int i = 0; i < matrix.size(); i++)
        BOOST_CHECK_EQUAL_COLLECTIONS(matrix[i].begin(), matrix[i].end(), expected[i].begin(), expected[i].end());
}

BOOST_AUTO_TEST_CASE(PlainTest2)
{
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
    BOOST_CHECK_EQUAL(matrix.size(), expected.size());
    for (int i = 0; i < matrix.size(); i++)
        BOOST_CHECK_EQUAL_COLLECTIONS(matrix[i].begin(), matrix[i].end(), expected[i].begin(), expected[i].end());
}

BOOST_AUTO_TEST_SUITE_END()