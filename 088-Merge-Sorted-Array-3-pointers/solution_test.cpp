#define BOOST_TEST_MODULE SolutionTest

#include "solution.hpp"

//#define BOOST_TEST_DYN_LINK
#include <boost/test/unit_test.hpp>

BOOST_AUTO_TEST_SUITE(SolutionSuite)

BOOST_AUTO_TEST_CASE(PlainTest1)
{
    vector<int> nums1{1,2,3,0,0,0};
    vector<int> nums2{2,5,6};
    Solution().merge(nums1, 3, nums2, 3);

    vector<int> expected{1,2,2,3,5,6};

    BOOST_REQUIRE_EQUAL(nums1.size(), expected.size());
    BOOST_CHECK_EQUAL_COLLECTIONS(nums1.begin(), nums1.end(), expected.begin(), expected.end());
}

BOOST_AUTO_TEST_CASE(PlainTest2)
{
    vector<int> nums1{2,4,6,8,0,0,0};
    vector<int> nums2{1,5,9};
    Solution().merge(nums1, 4, nums2, 3);

    vector<int> expected{1,2,4,5,6,8,9};

    BOOST_REQUIRE_EQUAL(nums1.size(), expected.size());
    BOOST_CHECK_EQUAL_COLLECTIONS(nums1.begin(), nums1.end(), expected.begin(), expected.end());
}

BOOST_AUTO_TEST_CASE(PlainTest3)
{
    vector<int> nums1{-1,3,0,0,0,0,0};
    vector<int> nums2{0,0,1,2,3};
    Solution().merge(nums1, 2, nums2, 5);

    vector<int> expected{-1,0,0,1,2,3,3};

    BOOST_REQUIRE_EQUAL(nums1.size(), expected.size());
    BOOST_CHECK_EQUAL_COLLECTIONS(nums1.begin(), nums1.end(), expected.begin(), expected.end());
}

BOOST_AUTO_TEST_CASE(PlainTest4)
{
    vector<int> nums1{4,5,6,0,0,0};
    vector<int> nums2{1,2,3};
    Solution().merge(nums1, 3, nums2, 3);

    vector<int> expected{1,2,3,4,5,6};

    BOOST_REQUIRE_EQUAL(nums1.size(), expected.size());
    BOOST_CHECK_EQUAL_COLLECTIONS(nums1.begin(), nums1.end(), expected.begin(), expected.end());
}

BOOST_AUTO_TEST_SUITE_END()