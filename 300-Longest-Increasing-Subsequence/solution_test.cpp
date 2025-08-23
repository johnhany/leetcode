#include <catch2/catch_test_macros.hpp>
#include <catch2/matchers/catch_matchers_string.hpp>
#include <catch2/matchers/catch_matchers_vector.hpp>

#include "solution.hpp"


TEST_CASE( "Running solution test 1" ) {
    vector<int> nums{10,9,2,5,3,7,101,18};
    int results = Solution().lengthOfLIS(nums);

    int expected = 4;

    REQUIRE( results == expected );
}
