#define BOOST_TEST_MODULE SolutionTest

#include "solution.hpp"

//#define BOOST_TEST_DYN_LINK
#include <boost/test/unit_test.hpp>

BOOST_AUTO_TEST_SUITE(SolutionSuite)

BOOST_AUTO_TEST_CASE(PlainTest1)
{
    string haystack = "hello", needle = "ll";
    int result = Solution().strStr(haystack, needle);

    int expected = 2;
    BOOST_CHECK_EQUAL(result, expected);
}

BOOST_AUTO_TEST_CASE(PlainTest2)
{
    string haystack = "hello", needle = "ll";
    int result = Solution().strStr(haystack, needle);

    int expected = 2;
    BOOST_CHECK_EQUAL(result, expected);
}

BOOST_AUTO_TEST_CASE(PlainTest3)
{
    string haystack = "aaaaa", needle = "bba";
    int result = Solution().strStr(haystack, needle);

    int expected = -1;
    BOOST_CHECK_EQUAL(result, expected);
}

BOOST_AUTO_TEST_CASE(PlainTest4)
{
    string haystack = "a", needle = "a";
    int result = Solution().strStr(haystack, needle);

    int expected = 0;
    BOOST_CHECK_EQUAL(result, expected);
}

BOOST_AUTO_TEST_CASE(PlainTest5)
{
    string haystack = "ab", needle = "ab";
    int result = Solution().strStr(haystack, needle);

    int expected = 0;
    BOOST_CHECK_EQUAL(result, expected);
}

BOOST_AUTO_TEST_CASE(PlainTest6)
{
    string haystack = "mississippi", needle = "issip";
    int result = Solution().strStr(haystack, needle);

    int expected = 4;
    BOOST_CHECK_EQUAL(result, expected);
}

BOOST_AUTO_TEST_CASE(PlainTest7)
{
    string haystack = "aaa", needle = "aaa";
    int result = Solution().strStr(haystack, needle);

    int expected = 0;
    BOOST_CHECK_EQUAL(result, expected);
}

BOOST_AUTO_TEST_SUITE_END()