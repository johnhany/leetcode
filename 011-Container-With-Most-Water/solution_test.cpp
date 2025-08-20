#include <catch2/catch_test_macros.hpp>
#include <catch2/matchers/catch_matchers_string.hpp>
#include <catch2/matchers/catch_matchers_vector.hpp>

#include "solution.hpp"


TEST_CASE( "Running solution test 1" ) {
    vector<int> height{1,8,6,2,5,4,8,3,7};

    int expected = 49;

    REQUIRE( Solution().maxArea(height) == expected );
}

TEST_CASE( "Running solution test 2" ) {
    vector<int> height{1,2,4,3};

    int expected = 4;

    REQUIRE( Solution().maxArea(height) == expected );
}

TEST_CASE( "Running solution test 3" ) {
    vector<int> height{2,3,4,5,18,17,6};

    int expected = 17;

    REQUIRE( Solution().maxArea(height) == expected );
}
