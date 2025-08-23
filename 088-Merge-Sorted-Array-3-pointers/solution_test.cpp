#include <catch2/catch_test_macros.hpp>
#include <catch2/matchers/catch_matchers_string.hpp>
#include <catch2/matchers/catch_matchers_vector.hpp>

#include "solution.hpp"


TEST_CASE( "Running solution test 1" ) {
    vector<int> nums1{1,2,3,0,0,0};
    vector<int> nums2{2,5,6};
    Solution().merge(nums1, 3, nums2, 3);

    vector<int> expected{1,2,2,3,5,6};

    REQUIRE_THAT( nums1, Catch::Matchers::Equals(expected) );
}

TEST_CASE( "Running solution test 2" ) {
    vector<int> nums1{2,4,6,8,0,0,0};
    vector<int> nums2{1,5,9};
    Solution().merge(nums1, 4, nums2, 3);

    vector<int> expected{1,2,4,5,6,8,9};

    REQUIRE_THAT( nums1, Catch::Matchers::Equals(expected) );
}

TEST_CASE( "Running solution test 3" ) {
    vector<int> nums1{-1,3,0,0,0,0,0};
    vector<int> nums2{0,0,1,2,3};
    Solution().merge(nums1, 2, nums2, 5);

    vector<int> expected{-1,0,0,1,2,3,3};

    REQUIRE_THAT( nums1, Catch::Matchers::Equals(expected) );
}

TEST_CASE( "Running solution test 4" ) {
    vector<int> nums1{4,5,6,0,0,0};
    vector<int> nums2{1,2,3};
    Solution().merge(nums1, 3, nums2, 3);

    vector<int> expected{1,2,3,4,5,6};

    REQUIRE_THAT( nums1, Catch::Matchers::Equals(expected) );
}
