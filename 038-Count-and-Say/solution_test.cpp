#define BOOST_TEST_MODULE SolutionTest

#include "solution.hpp"

#define BOOST_TEST_DYN_LINK
#include <boost/test/unit_test.hpp>

BOOST_AUTO_TEST_SUITE(SolutionSuite)

BOOST_AUTO_TEST_CASE(PlainTest1)
{
    int n = 1;
    string result = Solution().countAndSay(n);

    string expected = "1";
    BOOST_CHECK_EQUAL(result, expected);
}

BOOST_AUTO_TEST_CASE(PlainTest2)
{
    int n = 2;
    string result = Solution().countAndSay(n);

    string expected = "11";
    BOOST_CHECK_EQUAL(result, expected);
}

BOOST_AUTO_TEST_CASE(PlainTest3)
{
    int n = 3;
    string result = Solution().countAndSay(n);

    string expected = "21";
    BOOST_CHECK_EQUAL(result, expected);
}

BOOST_AUTO_TEST_CASE(PlainTest4)
{
    int n = 4;
    string result = Solution().countAndSay(n);

    string expected = "1211";
    BOOST_CHECK_EQUAL(result, expected);
}

BOOST_AUTO_TEST_CASE(PlainTest5)
{
    int n = 5;
    string result = Solution().countAndSay(n);

    string expected = "111221";
    BOOST_CHECK_EQUAL(result, expected);
}

BOOST_AUTO_TEST_CASE(PlainTest6)
{
    int n = 6;
    string result = Solution().countAndSay(n);

    string expected = "312211";
    BOOST_CHECK_EQUAL(result, expected);
}

BOOST_AUTO_TEST_CASE(PlainTest7)
{
    int n = 7;
    string result = Solution().countAndSay(n);

    string expected = "13112221";
    BOOST_CHECK_EQUAL(result, expected);
}

BOOST_AUTO_TEST_CASE(PlainTest8)
{
    int n = 8;
    string result = Solution().countAndSay(n);

    string expected = "1113213211";
    BOOST_CHECK_EQUAL(result, expected);
}

BOOST_AUTO_TEST_CASE(PlainTest9)
{
    int n = 9;
    string result = Solution().countAndSay(n);

    string expected = "31131211131221";
    BOOST_CHECK_EQUAL(result, expected);
}

BOOST_AUTO_TEST_CASE(PlainTest10)
{
    int n = 10;
    string result = Solution().countAndSay(n);

    string expected = "13211311123113112211";
    BOOST_CHECK_EQUAL(result, expected);
}

BOOST_AUTO_TEST_SUITE_END()