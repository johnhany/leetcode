#define BOOST_TEST_MODULE SolutionTest

#include "solution.hpp"

//#define BOOST_TEST_DYN_LINK
#include <boost/test/unit_test.hpp>

BOOST_AUTO_TEST_SUITE(SolutionSuite)

BOOST_AUTO_TEST_CASE(PlainTest1)
{
    string s = "barfoothefoobarman";
    vector<string> words{
        "foo","bar"
    };
    vector<int> result = Solution().findSubstring(s, words);

    vector<int> expected{0, 9};
    BOOST_CHECK_EQUAL(result.size(), expected.size());
    BOOST_CHECK_EQUAL_COLLECTIONS(result.begin(), result.end(), expected.begin(), expected.end());
}

BOOST_AUTO_TEST_CASE(PlainTest2)
{
    string s = "wordgoodgoodgoodbestword";
    vector<string> words{
        "word","good","best","word"
    };
    vector<int> result = Solution().findSubstring(s, words);

    vector<int> expected{};
    BOOST_CHECK_EQUAL(result.size(), expected.size());
    BOOST_CHECK_EQUAL_COLLECTIONS(result.begin(), result.end(), expected.begin(), expected.end());
}

BOOST_AUTO_TEST_CASE(PlainTest3)
{
    string s = "foofoobarbar";
    vector<string> words{
        "foo","bar"
    };
    vector<int> result = Solution().findSubstring(s, words);

    vector<int> expected{3};
    BOOST_CHECK_EQUAL(result.size(), expected.size());
    BOOST_CHECK_EQUAL_COLLECTIONS(result.begin(), result.end(), expected.begin(), expected.end());
}

BOOST_AUTO_TEST_CASE(PlainTest4)
{
    string s = "barfoofoobarthefoobarman";
    vector<string> words{
        "bar","foo","the"
    };
    vector<int> result = Solution().findSubstring(s, words);

    vector<int> expected{6, 9, 12};
    BOOST_CHECK_EQUAL(result.size(), expected.size());
    BOOST_CHECK_EQUAL_COLLECTIONS(result.begin(), result.end(), expected.begin(), expected.end());
}

BOOST_AUTO_TEST_CASE(PlainTest5)
{
    string s = "wordgoodgoodgoodbestword";
    vector<string> words{
        "word","good","best","good"
    };
    vector<int> result = Solution().findSubstring(s, words);

    vector<int> expected{8};
    BOOST_CHECK_EQUAL(result.size(), expected.size());
    BOOST_CHECK_EQUAL_COLLECTIONS(result.begin(), result.end(), expected.begin(), expected.end());
}

BOOST_AUTO_TEST_SUITE_END()