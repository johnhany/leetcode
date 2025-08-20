#include <catch2/catch_test_macros.hpp>
#include <catch2/matchers/catch_matchers_vector.hpp>

#include "solution.hpp"


TEST_CASE( "Running solution test 1" ) {
    vector<int> nums{2, 7, 11, 15};
    int target = 9;

    vector<int> expected{0, 1};

    REQUIRE_THAT( expected, Catch::Matchers::Equals(Solution().twoSum(nums, target)) );
}
