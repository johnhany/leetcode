#define BOOST_TEST_MODULE SolutionTest

#include "solution.hpp"

//#define BOOST_TEST_DYN_LINK
#include <boost/test/unit_test.hpp>

BOOST_AUTO_TEST_SUITE(SolutionSuite)

BOOST_AUTO_TEST_CASE(PlainTest1)
{
    string roman = "III";
    int results = Solution().romanToInt(roman);

    int expected = 3;
    BOOST_CHECK_EQUAL(results, expected);
}

BOOST_AUTO_TEST_CASE(PlainTest2)
{
    string roman = "IV";
    int results = Solution().romanToInt(roman);

    int expected = 4;
    BOOST_CHECK_EQUAL(results, expected);
}

BOOST_AUTO_TEST_CASE(PlainTest3)
{
    string roman = "IX";
    int results = Solution().romanToInt(roman);

    int expected = 9;
    BOOST_CHECK_EQUAL(results, expected);
}

BOOST_AUTO_TEST_CASE(PlainTest4)
{
    string roman = "LVIII";
    int results = Solution().romanToInt(roman);

    int expected = 58;
    BOOST_CHECK_EQUAL(results, expected);
}

BOOST_AUTO_TEST_CASE(PlainTest5)
{
    string roman = "MCMXCIV";
    int results = Solution().romanToInt(roman);

    int expected = 1994;
    BOOST_CHECK_EQUAL(results, expected);
}

BOOST_AUTO_TEST_CASE(PlainTest6)
{
    string roman = "";
    int results = Solution().romanToInt(roman);

    int expected = 0;
    BOOST_CHECK_EQUAL(results, expected);
}

BOOST_AUTO_TEST_SUITE_END()