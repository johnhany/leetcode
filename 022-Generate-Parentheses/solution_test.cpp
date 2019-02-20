#define BOOST_TEST_MODULE SolutionTest

#include "solution.hpp"

#define BOOST_TEST_DYN_LINK
#include <boost/test/unit_test.hpp>

BOOST_AUTO_TEST_SUITE(SolutionSuite)

BOOST_AUTO_TEST_CASE(PlainTest1)
{
    int n = 3;
    vector<string> result = Solution().generateParenthesis(n);

    vector<string> expected{
        "((()))",
        "(()())",
        "(())()",
        "()(())",
        "()()()"
    };
    BOOST_CHECK_EQUAL(result.size(), expected.size());
    sort(result.begin(), result.end());
    sort(expected.begin(), expected.end());
    BOOST_CHECK_EQUAL_COLLECTIONS(result.begin(), result.end(), expected.begin(), expected.end());
}

BOOST_AUTO_TEST_CASE(PlainTest2)
{
    int n = 0;
    vector<string> result = Solution().generateParenthesis(n);

    vector<string> expected{};
    BOOST_CHECK_EQUAL(result.size(), expected.size());
    sort(result.begin(), result.end());
    sort(expected.begin(), expected.end());
    BOOST_CHECK_EQUAL_COLLECTIONS(result.begin(), result.end(), expected.begin(), expected.end());
}

BOOST_AUTO_TEST_SUITE_END()