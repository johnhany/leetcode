#include <catch2/catch_test_macros.hpp>
#include <catch2/matchers/catch_matchers_string.hpp>
#include <catch2/matchers/catch_matchers_vector.hpp>

#include "solution.hpp"


TEST_CASE( "Running solution test 1" ) {
    vector<int> nums{2,3,1,1,4};
    int result = Solution().jump(nums);

    int expected = 2;

    REQUIRE( result == expected );
}
