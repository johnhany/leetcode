#define BOOST_TEST_MODULE SolutionTest

#include "solution.hpp"

//#define BOOST_TEST_DYN_LINK
#include <boost/test/unit_test.hpp>

BOOST_AUTO_TEST_SUITE(SolutionSuite)

BOOST_AUTO_TEST_CASE(PlainTest1)
{
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

    BOOST_REQUIRE_EQUAL(matrix.size(), expected.size());
    for (int i = 0; i < matrix.size(); i++)
        BOOST_CHECK_EQUAL_COLLECTIONS(matrix[i].begin(), matrix[i].end(),
                                      expected[i].begin(), expected[i].end());
}

BOOST_AUTO_TEST_CASE(PlainTest2)
{
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

    BOOST_REQUIRE_EQUAL(matrix.size(), expected.size());
    for (int i = 0; i < matrix.size(); i++)
        BOOST_CHECK_EQUAL_COLLECTIONS(matrix[i].begin(), matrix[i].end(),
                                      expected[i].begin(), expected[i].end());
}

BOOST_AUTO_TEST_SUITE_END()