#define BOOST_TEST_MODULE SolutionTest

#include "solution.hpp"

//#define BOOST_TEST_DYN_LINK
#include <boost/test/unit_test.hpp>

BOOST_AUTO_TEST_SUITE(SolutionSuite)

BOOST_AUTO_TEST_CASE(PlainTest1)
{
    string s = "ADOBECODEBANC";
    string t = "ABC";
    string result = Solution().minWindow(s, t);

    string expected = "BANC";

    BOOST_REQUIRE_EQUAL(result, expected);
}

BOOST_AUTO_TEST_CASE(PlainTest2)
{
    string s = "BAC";
    string t = "A";
    string result = Solution().minWindow(s, t);

    string expected = "A";

    BOOST_REQUIRE_EQUAL(result, expected);
}

BOOST_AUTO_TEST_CASE(PlainTest3)
{
    string s = "APQCBABAC";
    string t = "AABC";
    string result = Solution().minWindow(s, t);

    string expected = "ABAC";

    BOOST_REQUIRE_EQUAL(result, expected);
}

BOOST_AUTO_TEST_CASE(PlainTest4)
{
    string s = "APQBABA";
    string t = "ABC";
    string result = Solution().minWindow(s, t);

    string expected = "";

    BOOST_REQUIRE_EQUAL(result, expected);
}

BOOST_AUTO_TEST_CASE(PlainTest5)
{
    string s = "BBA";
    string t = "AB";
    string result = Solution().minWindow(s, t);

    string expected = "BA";

    BOOST_REQUIRE_EQUAL(result, expected);
}

BOOST_AUTO_TEST_CASE(PlainTest6)
{
    string s = "aaaaaaaaaaaabbbbbcdd";
    string t = "abcdd";
    string result = Solution().minWindow(s, t);

    string expected = "abbbbbcdd";

    BOOST_REQUIRE_EQUAL(result, expected);
}

BOOST_AUTO_TEST_SUITE_END()