#define BOOST_TEST_MODULE SolutionTest

#include "solution.hpp"

//#define BOOST_TEST_DYN_LINK
#include <boost/test/unit_test.hpp>


BOOST_AUTO_TEST_SUITE(SolutionSuite)

BOOST_AUTO_TEST_CASE(PlainTest1)
{
    int n = 4;
    vector<vector<string>> result = Solution().solveNQueens(n);

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
    BOOST_CHECK_EQUAL(result.size(), expected.size());
    for (int i = 0; i < result.size(); i++)
        BOOST_CHECK_EQUAL_COLLECTIONS(result[i].begin(), result[i].end(), expected[i].begin(), expected[i].end());
}

BOOST_AUTO_TEST_SUITE_END()