#include <catch2/catch_test_macros.hpp>
#include <catch2/matchers/catch_matchers_string.hpp>
#include <catch2/matchers/catch_matchers_vector.hpp>

#include "solution.hpp"


TEST_CASE( "Running solution test 1" ) {
    vector<int> nums{4,1,2,1,2};
    int results = Solution().singleNumber(nums);

    int expected = 4;

    REQUIRE( results == expected );
}

TEST_CASE( "Running solution test 2" ) {
    vector<int> nums{2,2,1};
    int results = Solution().singleNumber(nums);

    int expected = 1;

    REQUIRE( results == expected );
}
