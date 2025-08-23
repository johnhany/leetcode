#include <catch2/catch_test_macros.hpp>
#include <catch2/matchers/catch_matchers_string.hpp>
#include <catch2/matchers/catch_matchers_vector.hpp>

#include "solution.hpp"


TEST_CASE( "Running solution test 1" ) {
    vector<int> nums{2,0,2,1,1,0};
    Solution().sortColors(nums);

    vector<int> expected{0,0,1,1,2,2};

    REQUIRE_THAT( nums, Catch::Matchers::Equals(expected) );
}

TEST_CASE( "Running solution test 2" ) {
    vector<int> nums{2,0,1,2,0,1,2,0,1};
    Solution().sortColors(nums);

    vector<int> expected{0,0,0,1,1,1,2,2,2};

    REQUIRE_THAT( nums, Catch::Matchers::Equals(expected) );
}

TEST_CASE( "Running solution test 3" ) {
    vector<int> nums{2,2,2,0,0,1,1,1};
    Solution().sortColors(nums);

    vector<int> expected{0,0,1,1,1,2,2,2};

    REQUIRE_THAT( nums, Catch::Matchers::Equals(expected) );
}

TEST_CASE( "Running solution test 4" ) {
    vector<int> nums{2,2,2,0,0};
    Solution().sortColors(nums);

    vector<int> expected{0,0,2,2,2};

    REQUIRE_THAT( nums, Catch::Matchers::Equals(expected) );
}

TEST_CASE( "Running solution test 5" ) {
    vector<int> nums{1,1,1,0,0};
    Solution().sortColors(nums);

    vector<int> expected{0,0,1,1,1};

    REQUIRE_THAT( nums, Catch::Matchers::Equals(expected) );
}
