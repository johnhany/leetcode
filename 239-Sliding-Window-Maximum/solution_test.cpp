#include <catch2/catch_test_macros.hpp>
#include <catch2/matchers/catch_matchers_string.hpp>
#include <catch2/matchers/catch_matchers_vector.hpp>

#include "solution.hpp"


TEST_CASE( "Running solution test 1" ) {
    vector<int> nums{1,3,-1,-3,5,3,6,7};
    int k = 3;
    vector<int> results = Solution().maxSlidingWindow(nums, k);

    vector<int> expected{3,3,5,5,6,7};

    REQUIRE_THAT( expected, Catch::Matchers::Equals(results) );
}

TEST_CASE( "Running solution test 2" ) {
    vector<int> nums{1};
    int k = 1;
    vector<int> results = Solution().maxSlidingWindow(nums, k);

    vector<int> expected{1};

    REQUIRE_THAT( expected, Catch::Matchers::Equals(results) );
}

TEST_CASE( "Running solution test 3" ) {
    vector<int> nums{-7,-8,7,5,7,1,6,0};
    int k = 4;
    vector<int> results = Solution().maxSlidingWindow(nums, k);

    vector<int> expected{7,7,7,7,7};

    REQUIRE_THAT( expected, Catch::Matchers::Equals(results) );
}
