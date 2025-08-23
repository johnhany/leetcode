#include <catch2/catch_test_macros.hpp>
#include <catch2/matchers/catch_matchers_string.hpp>
#include <catch2/matchers/catch_matchers_vector.hpp>

#include "solution.hpp"


TEST_CASE( "Running solution test 1" ) {
    vector<int> nums{3,2,1,5,6,4};
    int k = 2;
    int results = Solution().findKthLargest(nums, k);

    int expected = 5;

    REQUIRE( results == expected );
}

TEST_CASE( "Running solution test 2" ) {
    vector<int> nums{3,2,3,1,2,4,5,5,6};
    int k = 4;
    int results = Solution().findKthLargest(nums, k);

    int expected = 4;

    REQUIRE( results == expected );
}

TEST_CASE( "Running solution test 3" ) {
    vector<int> nums{3,2,3,1,2,4,5,5,6};
    int k = 7;
    int results = Solution().findKthLargest(nums, k);

    int expected = 2;

    REQUIRE( results == expected );
}
