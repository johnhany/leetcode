#define BOOST_TEST_MODULE SolutionTest

#include "solution.hpp"

//#define BOOST_TEST_DYN_LINK
#include <boost/test/unit_test.hpp>

BOOST_AUTO_TEST_SUITE(SolutionSuite)

BOOST_AUTO_TEST_CASE(PlainTest1)
{
    vector<int> nums{1,1,2,3,3,4,4,8,8};
    int results = Solution().singleNonDuplicate(nums);

    int expected = 2;

    BOOST_CHECK_EQUAL(results, expected);
}

BOOST_AUTO_TEST_CASE(PlainTest2)
{
    vector<int> nums{3,3,7,7,10,11,11};
    int results = Solution().singleNonDuplicate(nums);

    int expected = 10;

    BOOST_CHECK_EQUAL(results, expected);
}

BOOST_AUTO_TEST_SUITE_END()