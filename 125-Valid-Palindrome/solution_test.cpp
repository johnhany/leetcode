#define BOOST_TEST_MODULE SolutionTest

#include "solution.hpp"

//#define BOOST_TEST_DYN_LINK
#include <boost/test/unit_test.hpp>

BOOST_AUTO_TEST_SUITE(SolutionSuite)

BOOST_AUTO_TEST_CASE(PlainTest1)
{
    string s = "A man, a plan, a canal: Panama";
    bool results = Solution().isPalindrome(s);

    bool expected = true;

    BOOST_CHECK_EQUAL(results, expected);
}

BOOST_AUTO_TEST_CASE(PlainTest2)
{
    string s = "race a car";
    bool results = Solution().isPalindrome(s);

    bool expected = false;

    BOOST_CHECK_EQUAL(results, expected);
}

BOOST_AUTO_TEST_CASE(PlainTest3)
{
    string s = "0P";
    bool results = Solution().isPalindrome(s);

    bool expected = false;

    BOOST_CHECK_EQUAL(results, expected);
}

BOOST_AUTO_TEST_CASE(PlainTest4)
{
    string s = "0P,";
    bool results = Solution().isPalindrome(s);

    bool expected = false;

    BOOST_CHECK_EQUAL(results, expected);
}

BOOST_AUTO_TEST_SUITE_END()