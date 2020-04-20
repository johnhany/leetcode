#define BOOST_TEST_MODULE SolutionTest

#include "solution.hpp"

//#define BOOST_TEST_DYN_LINK
#include <boost/test/unit_test.hpp>

BOOST_AUTO_TEST_SUITE(SolutionSuite)

BOOST_AUTO_TEST_CASE(PlainTest1)
{
    string s = "AAAAACCCCCAAAAACCCCCCAAAAAGGGTTT";
    vector<string> results = Solution().findRepeatedDnaSequences(s);

    vector<string> expected{
        "AAAAACCCCC", "CCCCCAAAAA"
    };

    BOOST_CHECK_EQUAL_COLLECTIONS(results.begin(), results.end(), expected.begin(), expected.end());
}

BOOST_AUTO_TEST_SUITE_END()