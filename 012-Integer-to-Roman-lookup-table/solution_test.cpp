#define BOOST_TEST_MODULE SolutionTest

#include "solution.hpp"

//#define BOOST_TEST_DYN_LINK
#include <boost/test/unit_test.hpp>

BOOST_AUTO_TEST_SUITE(SolutionSuite)

BOOST_AUTO_TEST_CASE(PlainTest1)
{
    int num = 3;
    string results = Solution().intToRoman(num);

    string expected = "III";
    BOOST_CHECK_EQUAL(results, expected);
}

BOOST_AUTO_TEST_CASE(PlainTest2)
{
    int num = 4;
    string results = Solution().intToRoman(num);

    string expected = "IV";
    BOOST_CHECK_EQUAL(results, expected);
}

BOOST_AUTO_TEST_CASE(PlainTest3)
{
    int num = 9;
    string results = Solution().intToRoman(num);

    string expected = "IX";
    BOOST_CHECK_EQUAL(results, expected);
}

BOOST_AUTO_TEST_CASE(PlainTest4)
{
    int num = 58;
    string results = Solution().intToRoman(num);

    string expected = "LVIII";
    BOOST_CHECK_EQUAL(results, expected);
}

BOOST_AUTO_TEST_CASE(PlainTest5)
{
    int num = 1994;
    string results = Solution().intToRoman(num);

    string expected = "MCMXCIV";
    BOOST_CHECK_EQUAL(results, expected);
}

BOOST_AUTO_TEST_CASE(PlainTest6)
{
    int num = 0;
    string results = Solution().intToRoman(num);

    string expected = "";
    BOOST_CHECK_EQUAL(results, expected);
}

BOOST_AUTO_TEST_SUITE_END()