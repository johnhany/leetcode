#include <catch2/catch_test_macros.hpp>
#include <catch2/matchers/catch_matchers_string.hpp>
#include <catch2/matchers/catch_matchers_vector.hpp>

#include "solution.hpp"


TEST_CASE( "Running solution test 1" ) {
    vector<int> nums1{1,2,2,1};
    vector<int> nums2{2,2};
    vector<int> results = Solution().intersection(nums1, nums2);

    vector<int> expected{2,2};

    sort(results.begin(), results.end());
    sort(expected.begin(), expected.end());
    REQUIRE_THAT( expected, Catch::Matchers::Equals(results) );
}

TEST_CASE( "Running solution test 2" ) {
    vector<int> nums1{4,9,5};
    vector<int> nums2{9,4,9,8,4};
    vector<int> results = Solution().intersection(nums1, nums2);

    vector<int> expected{9,4};

    sort(results.begin(), results.end());
    sort(expected.begin(), expected.end());
    REQUIRE_THAT( expected, Catch::Matchers::Equals(results) );
}
