#define BOOST_TEST_MODULE SolutionTest

#include "solution.hpp"

//#define BOOST_TEST_DYN_LINK
#include <boost/test/unit_test.hpp>

BOOST_AUTO_TEST_SUITE(SolutionSuite)

BOOST_AUTO_TEST_CASE(PlainTest1)
{
    vector<string> strs{"flower","flow","flight"};
    string results = Solution().longestCommonPrefix(strs);

    string expected = "fl";
    BOOST_CHECK_EQUAL(results, expected);
}

BOOST_AUTO_TEST_CASE(PlainTest2)
{
    vector<string> strs{"dog","racecar","car"};
    string results = Solution().longestCommonPrefix(strs);

    string expected = "";
    BOOST_CHECK_EQUAL(results, expected);
}

BOOST_AUTO_TEST_CASE(PlainTest3)
{
    vector<string> strs{};
    string results = Solution().longestCommonPrefix(strs);

    string expected = "";
    BOOST_CHECK_EQUAL(results, expected);
}

BOOST_AUTO_TEST_CASE(PlainTest4)
{
    vector<string> strs{"flower","flow",""};
    string results = Solution().longestCommonPrefix(strs);

    string expected = "";
    BOOST_CHECK_EQUAL(results, expected);
}

BOOST_AUTO_TEST_CASE(PlainTest5)
{
    vector<string> strs{"abb","abc"};
    string results = Solution().longestCommonPrefix(strs);

    string expected = "ab";
    BOOST_CHECK_EQUAL(results, expected);
}

BOOST_AUTO_TEST_SUITE_END()