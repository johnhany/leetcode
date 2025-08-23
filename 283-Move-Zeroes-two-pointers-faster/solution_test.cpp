#include <catch2/catch_test_macros.hpp>
#include <catch2/matchers/catch_matchers_string.hpp>
#include <catch2/matchers/catch_matchers_vector.hpp>

#include "solution.hpp"


TEST_CASE( "Running solution test 1" ) {
    vector<int> nums{0,1,0,3,12};
    Solution().moveZeroes(nums);

    vector<int> expected{1,3,12,0,0};

    REQUIRE_THAT( nums, Catch::Matchers::Equals(expected) );
}
