#include <catch2/catch_test_macros.hpp>
#include <catch2/matchers/catch_matchers_string.hpp>
#include <catch2/matchers/catch_matchers_vector.hpp>

#include "solution.hpp"


TEST_CASE( "Running solution test 1" ) {
    vector<int> nums{1,2,3};

    Solution().nextPermutation(nums);

    vector<int> expected{1,3,2};

    REQUIRE_THAT( expected, Catch::Matchers::Equals(nums) );
}

TEST_CASE( "Running solution test 2" ) {
    vector<int> nums{3,2,1};

    Solution().nextPermutation(nums);

    vector<int> expected{1,2,3};

    REQUIRE_THAT( expected, Catch::Matchers::Equals(nums) );
}

TEST_CASE( "Running solution test 3" ) {
    vector<int> nums{1,1,5};

    Solution().nextPermutation(nums);

    vector<int> expected{1,5,1};

    REQUIRE_THAT( expected, Catch::Matchers::Equals(nums) );
}

TEST_CASE( "Running solution test 4" ) {
    vector<int> nums{3,2,1};

    Solution().nextPermutation(nums);

    vector<int> expected{1,2,3};

    REQUIRE_THAT( expected, Catch::Matchers::Equals(nums) );
}

TEST_CASE( "Running solution test 5" ) {
    vector<int> nums{1,1};

    Solution().nextPermutation(nums);

    vector<int> expected{1,1};

    REQUIRE_THAT( expected, Catch::Matchers::Equals(nums) );
}

TEST_CASE( "Running solution test 6" ) {
    vector<int> nums{1,5,1};

    Solution().nextPermutation(nums);

    vector<int> expected{5,1,1};

    REQUIRE_THAT( expected, Catch::Matchers::Equals(nums) );
}
