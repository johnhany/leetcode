#define BOOST_TEST_MODULE SolutionTest

#include "solution.hpp"

//#define BOOST_TEST_DYN_LINK
#include <boost/test/unit_test.hpp>

BOOST_AUTO_TEST_SUITE(SolutionSuite)

BOOST_AUTO_TEST_CASE(PlainTest1)
{
    string s = "aa";
    string p = "a";
    bool result = Solution().isMatch(s, p);

    bool expected = false;
    BOOST_CHECK_EQUAL(result, expected);
}

BOOST_AUTO_TEST_CASE(PlainTest2)
{
    string s = "aa";
    string p = "*";
    bool result = Solution().isMatch(s, p);

    bool expected = true;
    BOOST_CHECK_EQUAL(result, expected);
}

BOOST_AUTO_TEST_CASE(PlainTest3)
{
    string s = "cb";
    string p = "?a";
    bool result = Solution().isMatch(s, p);

    bool expected = false;
    BOOST_CHECK_EQUAL(result, expected);
}

BOOST_AUTO_TEST_CASE(PlainTest4)
{
    string s = "adceb";
    string p = "*a*b";
    bool result = Solution().isMatch(s, p);

    bool expected = true;
    BOOST_CHECK_EQUAL(result, expected);
}

BOOST_AUTO_TEST_CASE(PlainTest5)
{
    string s = "acdcb";
    string p = "a*c?b";
    bool result = Solution().isMatch(s, p);

    bool expected = false;
    BOOST_CHECK_EQUAL(result, expected);
}

BOOST_AUTO_TEST_CASE(PlainTest6)
{
    string s = "aac";
    string p = "*?*ac";
    bool result = Solution().isMatch(s, p);

    bool expected = true;
    BOOST_CHECK_EQUAL(result, expected);
}

BOOST_AUTO_TEST_SUITE_END()