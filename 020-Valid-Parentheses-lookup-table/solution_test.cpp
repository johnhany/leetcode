#define BOOST_TEST_MODULE SolutionTest

#include "solution.hpp"

#define BOOST_TEST_DYN_LINK
#include <boost/test/unit_test.hpp>

BOOST_AUTO_TEST_SUITE(SolutionSuite)

BOOST_AUTO_TEST_CASE(PlainTest1)
{
    string s = "()";
    bool result = Solution().isValid(s);

    bool expected = true;
    BOOST_CHECK_EQUAL(result, expected);
}

BOOST_AUTO_TEST_CASE(PlainTest2)
{
    string s = "()[]{}";
    bool result = Solution().isValid(s);

    bool expected = true;
    BOOST_CHECK_EQUAL(result, expected);
}

BOOST_AUTO_TEST_CASE(PlainTest3)
{
    string s = "(]";
    bool result = Solution().isValid(s);

    bool expected = false;
    BOOST_CHECK_EQUAL(result, expected);
}

BOOST_AUTO_TEST_CASE(PlainTest4)
{
    string s = "([)]";
    bool result = Solution().isValid(s);

    bool expected = false;
    BOOST_CHECK_EQUAL(result, expected);
}

BOOST_AUTO_TEST_CASE(PlainTest5)
{
    string s = "{[]}";
    bool result = Solution().isValid(s);

    bool expected = true;
    BOOST_CHECK_EQUAL(result, expected);
}

BOOST_AUTO_TEST_CASE(PlainTest6)
{
    string s = "";
    bool result = Solution().isValid(s);

    bool expected = true;
    BOOST_CHECK_EQUAL(result, expected);
}

BOOST_AUTO_TEST_CASE(PlainTest7)
{
    string s = "]";
    bool result = Solution().isValid(s);

    bool expected = false;
    BOOST_CHECK_EQUAL(result, expected);
}

BOOST_AUTO_TEST_SUITE_END()