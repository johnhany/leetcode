#define BOOST_TEST_MODULE SolutionTest

#include "solution.hpp"

//#define BOOST_TEST_DYN_LINK
#include <boost/test/unit_test.hpp>

BOOST_AUTO_TEST_SUITE(SolutionSuite)

BOOST_AUTO_TEST_CASE(PlainTest1)
{
    vector<int> digits{1,2,3};
    vector<int> result = Solution().plusOne(digits);

    vector<int> expected{1,2,4};

    BOOST_REQUIRE_EQUAL(result.size(), expected.size());
    BOOST_CHECK_EQUAL_COLLECTIONS(result.begin(), result.end(), expected.begin(), expected.end());
}

BOOST_AUTO_TEST_CASE(PlainTest2)
{
    vector<int> digits{4,3,2,1};
    vector<int> result = Solution().plusOne(digits);

    vector<int> expected{4,3,2,2};

    BOOST_REQUIRE_EQUAL(result.size(), expected.size());
    BOOST_CHECK_EQUAL_COLLECTIONS(result.begin(), result.end(), expected.begin(), expected.end());
}

BOOST_AUTO_TEST_CASE(PlainTest3)
{
    vector<int> digits{1,2,9};
    vector<int> result = Solution().plusOne(digits);

    vector<int> expected{1,3,0};

    BOOST_REQUIRE_EQUAL(result.size(), expected.size());
    BOOST_CHECK_EQUAL_COLLECTIONS(result.begin(), result.end(), expected.begin(), expected.end());
}

BOOST_AUTO_TEST_CASE(PlainTest4)
{
    vector<int> digits{9,9};
    vector<int> result = Solution().plusOne(digits);

    vector<int> expected{1,0,0};

    BOOST_REQUIRE_EQUAL(result.size(), expected.size());
    BOOST_CHECK_EQUAL_COLLECTIONS(result.begin(), result.end(), expected.begin(), expected.end());
}

BOOST_AUTO_TEST_SUITE_END()