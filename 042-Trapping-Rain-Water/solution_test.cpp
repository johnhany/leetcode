#include <catch2/catch_test_macros.hpp>
#include <catch2/matchers/catch_matchers_string.hpp>
#include <catch2/matchers/catch_matchers_vector.hpp>

#include "solution.hpp"


TEST_CASE( "Running solution test 1" ) {
    vector<int> height{0,1,0,2,1,0,1,3,2,1,2,1};
    int result = Solution().trap(height);

    int expected = 6;
    REQUIRE( result == expected );
}

TEST_CASE( "Running solution test 2" ) {
    vector<int> height{3,1,2,1,4,0};
    int result = Solution().trap(height);

    int expected = 5;
    REQUIRE( result == expected );
}

TEST_CASE( "Running solution test 3" ) {
    vector<int> height{4,1,3,1,2,1};
    int result = Solution().trap(height);

    int expected = 3;
    REQUIRE( result == expected );
}

TEST_CASE( "Running solution test 4" ) {
    vector<int> height{5,4,1,2};
    int result = Solution().trap(height);

    int expected = 1;
    REQUIRE( result == expected );
}
