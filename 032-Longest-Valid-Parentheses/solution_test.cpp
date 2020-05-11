#define BOOST_TEST_MODULE SolutionTest

#include "solution.hpp"

//#define BOOST_TEST_DYN_LINK
#include <boost/test/unit_test.hpp>

BOOST_AUTO_TEST_SUITE(SolutionSuite)

BOOST_AUTO_TEST_CASE(PlainTest1)
{
    string s = "(()";
    int result = Solution().longestValidParentheses(s);

    int expected = 2;
    BOOST_CHECK_EQUAL(result, expected);
}

BOOST_AUTO_TEST_CASE(PlainTest2)
{
    string s = ")()())";
    int result = Solution().longestValidParentheses(s);

    int expected = 4;
    BOOST_CHECK_EQUAL(result, expected);
}

BOOST_AUTO_TEST_CASE(PlainTest3)
{
    string s = "(()())()";
    int result = Solution().longestValidParentheses(s);

    int expected = 8;
    BOOST_CHECK_EQUAL(result, expected);
}

BOOST_AUTO_TEST_CASE(PlainTest4)
{
    string s = ")()())()()(";
    int result = Solution().longestValidParentheses(s);

    int expected = 4;
    BOOST_CHECK_EQUAL(result, expected);
}

BOOST_AUTO_TEST_SUITE_END()