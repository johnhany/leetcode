#define BOOST_TEST_MODULE SolutionTest

#include "solution.hpp"

//#define BOOST_TEST_DYN_LINK
#include <boost/test/unit_test.hpp>

BOOST_AUTO_TEST_SUITE(SolutionSuite)

BOOST_AUTO_TEST_CASE(PlainTest1)
{
    vector<int> nums1{1,2,2,1};
    vector<int> nums2{2,2};
    vector<int> results = Solution().intersection(nums1, nums2);

    vector<int> expected{2,2};

    sort(results.begin(), results.end());
    sort(expected.begin(), expected.end());
    BOOST_CHECK_EQUAL_COLLECTIONS(results.begin(), results.end(), expected.begin(), expected.end());
}

BOOST_AUTO_TEST_CASE(PlainTest2)
{
    vector<int> nums1{4,9,5};
    vector<int> nums2{9,4,9,8,4};
    vector<int> results = Solution().intersection(nums1, nums2);

    vector<int> expected{9,4};

    sort(results.begin(), results.end());
    sort(expected.begin(), expected.end());
    BOOST_CHECK_EQUAL_COLLECTIONS(results.begin(), results.end(), expected.begin(), expected.end());
}

BOOST_AUTO_TEST_SUITE_END()