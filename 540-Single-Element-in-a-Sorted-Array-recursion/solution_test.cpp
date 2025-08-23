#include <catch2/catch_test_macros.hpp>
#include <catch2/matchers/catch_matchers_string.hpp>
#include <catch2/matchers/catch_matchers_vector.hpp>

#include "solution.hpp"


TEST_CASE( "Running solution test 1" ) {
    vector<int> nums{1,1,2,3,3,4,4,8,8};
    int results = Solution().singleNonDuplicate(nums);

    int expected = 2;

    REQUIRE( results == expected );
}

TEST_CASE( "Running solution test 2" ) {
    vector<int> nums{3,3,7,7,10,11,11};
    int results = Solution().singleNonDuplicate(nums);

    int expected = 10;

    REQUIRE( results == expected );
}
