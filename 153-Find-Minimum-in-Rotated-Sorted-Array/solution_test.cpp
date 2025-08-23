#include <catch2/catch_test_macros.hpp>
#include <catch2/matchers/catch_matchers_string.hpp>
#include <catch2/matchers/catch_matchers_vector.hpp>

#include "solution.hpp"


TEST_CASE( "Running solution test 1" ) {
    vector<int> nums{3,4,5,1,2};
    int results = Solution().findMin(nums);

    int expected = 1;

    REQUIRE( results == expected );
}

TEST_CASE( "Running solution test 2" ) {
    vector<int> nums{4,5,6,7,0,1,2};
    int results = Solution().findMin(nums);

    int expected = 0;

    REQUIRE( results == expected );
}

TEST_CASE( "Running solution test 3" ) {
    vector<int> nums{4,5,6,7};
    int results = Solution().findMin(nums);

    int expected = 4;

    REQUIRE( results == expected );
}

TEST_CASE( "Running solution test 4" ) {
    vector<int> nums{3,1,2};
    int results = Solution().findMin(nums);

    int expected = 1;

    REQUIRE( results == expected );
}
