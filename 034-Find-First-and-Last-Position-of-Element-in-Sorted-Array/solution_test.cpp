#include <catch2/catch_test_macros.hpp>
#include <catch2/matchers/catch_matchers_string.hpp>
#include <catch2/matchers/catch_matchers_vector.hpp>

#include "solution.hpp"


TEST_CASE( "Running solution test 1" ) {
    vector<int> nums{5,7,7,8,8,10};
    int target = 8;

    vector<int> result = Solution().searchRange(nums, target);

    vector<int> expected{3,4};

    REQUIRE_THAT( expected, Catch::Matchers::Equals(result) );
}

TEST_CASE( "Running solution test 2" ) {
    vector<int> nums{5,7,7,8,8,10};
    int target = 6;

    vector<int> result = Solution().searchRange(nums, target);

    vector<int> expected{-1,-1};

    REQUIRE_THAT( expected, Catch::Matchers::Equals(result) );
}

TEST_CASE( "Running solution test 3" ) {
    vector<int> nums{5,7,7,8,8,10};
    int target = 4;

    vector<int> result = Solution().searchRange(nums, target);

    vector<int> expected{-1,-1};

    REQUIRE_THAT( expected, Catch::Matchers::Equals(result) );
}

TEST_CASE( "Running solution test 4" ) {
    vector<int> nums{5,7,7,8,8,10};
    int target = 11;

    vector<int> result = Solution().searchRange(nums, target);

    vector<int> expected{-1,-1};

    REQUIRE_THAT( expected, Catch::Matchers::Equals(result) );
}

TEST_CASE( "Running solution test 5" ) {
    vector<int> nums{5,5,5};
    int target = 5;

    vector<int> result = Solution().searchRange(nums, target);

    vector<int> expected{0,2};

    REQUIRE_THAT( expected, Catch::Matchers::Equals(result) );
}

TEST_CASE( "Running solution test 6" ) {
    vector<int> nums{5,5,5};
    int target = 4;

    vector<int> result = Solution().searchRange(nums, target);

    vector<int> expected{-1,-1};

    REQUIRE_THAT( expected, Catch::Matchers::Equals(result) );
}
