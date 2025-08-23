#include <catch2/catch_test_macros.hpp>
#include <catch2/matchers/catch_matchers_string.hpp>
#include <catch2/matchers/catch_matchers_vector.hpp>

#include "solution.hpp"


TEST_CASE( "Running solution test 1" ) {
    vector<int> nums{1,2,4};
    int k = 5;
    int results = Solution().maxFrequency(nums, k);

    int expected = 3;

    REQUIRE( results == expected );
}

TEST_CASE( "Running solution test 2" ) {
    vector<int> nums{1,4,8,13};
    int k = 5;
    int results = Solution().maxFrequency(nums, k);

    int expected = 2;

    REQUIRE( results == expected );
}
