#include <catch2/catch_test_macros.hpp>
#include <catch2/matchers/catch_matchers_string.hpp>
#include <catch2/matchers/catch_matchers_vector.hpp>

#include "solution.hpp"


TEST_CASE( "Running solution test 1" ) {
    vector<int> nums{1,2,0};
    int result = Solution().firstMissingPositive(nums);

    int expected = 3;
    REQUIRE( result == expected );
}

TEST_CASE( "Running solution test 2" ) {
    vector<int> nums{3,4,-1,1};
    int result = Solution().firstMissingPositive(nums);

    int expected = 2;
    REQUIRE( result == expected );
}

TEST_CASE( "Running solution test 3" ) {
    vector<int> nums{7,8,9,11,12};
    int result = Solution().firstMissingPositive(nums);

    int expected = 1;
    REQUIRE( result == expected );
}

TEST_CASE( "Running solution test 4" ) {
    vector<int> nums{-1,4,2,1,9,10};
    int result = Solution().firstMissingPositive(nums);

    int expected = 3;
    REQUIRE( result == expected );
}
