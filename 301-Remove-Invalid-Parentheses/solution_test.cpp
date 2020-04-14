#define BOOST_TEST_MODULE SolutionTest

#include "solution.hpp"

//#define BOOST_TEST_DYN_LINK
#include <boost/test/unit_test.hpp>

BOOST_AUTO_TEST_SUITE(SolutionSuite)

BOOST_AUTO_TEST_CASE(PlainTest1)
{
    string s = "()())()";
    vector<string> results = Solution().removeInvalidParentheses(s);

    vector<string> expected{
        "()()()", "(())()"
    };

    BOOST_CHECK_EQUAL_COLLECTIONS(results.begin(), results.end(), expected.begin(), expected.end());
}

BOOST_AUTO_TEST_CASE(PlainTest2)
{
    string s = "(a)())()";
    vector<string> results = Solution().removeInvalidParentheses(s);

    vector<string> expected{
        "(a)()()", "(a())()"
    };

    BOOST_CHECK_EQUAL_COLLECTIONS(results.begin(), results.end(), expected.begin(), expected.end());
}

BOOST_AUTO_TEST_CASE(PlainTest3)
{
    string s = ")(";
    vector<string> results = Solution().removeInvalidParentheses(s);

    vector<string> expected{
        ""
    };

    BOOST_CHECK_EQUAL_COLLECTIONS(results.begin(), results.end(), expected.begin(), expected.end());
}

BOOST_AUTO_TEST_SUITE_END()