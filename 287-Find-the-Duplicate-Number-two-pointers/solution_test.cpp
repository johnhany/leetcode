#include <catch2/catch_test_macros.hpp>
#include <catch2/matchers/catch_matchers_string.hpp>
#include <catch2/matchers/catch_matchers_vector.hpp>

#include "solution.hpp"


TEST_CASE( "Running solution test 1" ) {
    vector<int> nums{1,3,4,2,2};
    int results = Solution().findDuplicate(nums);

    int expected = 2;

    REQUIRE( results == expected );
}

TEST_CASE( "Running solution test 2" ) {
    vector<int> nums{3,1,3,4,2};
    int results = Solution().findDuplicate(nums);

    int expected = 3;

    REQUIRE( results == expected );
}
