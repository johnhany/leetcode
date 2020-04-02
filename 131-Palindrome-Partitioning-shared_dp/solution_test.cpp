#define BOOST_TEST_MODULE SolutionTest

#include "solution.hpp"

//#define BOOST_TEST_DYN_LINK
#include <boost/test/unit_test.hpp>

BOOST_AUTO_TEST_SUITE(SolutionSuite)

BOOST_AUTO_TEST_CASE(PlainTest1)
{
    string s = "aab";
    vector<vector<string>> results = Solution().partition(s);

    vector<vector<string>> expected{
        {"a","a","b"},
        {"aa","b"}
    };

    BOOST_CHECK_EQUAL(results.size(), expected.size());
    for (int i = 0; i < results.size(); i++)
        BOOST_CHECK_EQUAL_COLLECTIONS(results[i].begin(), results[i].end(), expected[i].begin(), expected[i].end());
}

BOOST_AUTO_TEST_SUITE_END()