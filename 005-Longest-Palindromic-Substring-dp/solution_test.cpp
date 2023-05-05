#define BOOST_TEST_MODULE SolutionTest

#include "solution.hpp"

//#define BOOST_TEST_DYN_LINK
#include <boost/test/unit_test.hpp>

BOOST_AUTO_TEST_SUITE(SolutionSuite)

BOOST_AUTO_TEST_CASE(PlainTest1)
{
    string input = "babad";
    string results = Solution().longestPalindrome(input);
    cout << results << endl;

    string expected1 = "bab";
    string expected2 = "aba";
    BOOST_CHECK((results.compare(expected1) & results.compare(expected2)) == 0);
}

BOOST_AUTO_TEST_CASE(PlainTest2)
{
    string input = "cbbd";
    string results = Solution().longestPalindrome(input);
    cout << results << endl;

    string expected1 = "bb";
    BOOST_CHECK(results.compare(expected1) == 0);
}

BOOST_AUTO_TEST_CASE(PlainTest3)
{
    string input = "ccc";
    string results = Solution().longestPalindrome(input);
    cout << results << endl;

    string expected1 = "ccc";
    BOOST_CHECK(results.compare(expected1) == 0);
}

BOOST_AUTO_TEST_SUITE_END()