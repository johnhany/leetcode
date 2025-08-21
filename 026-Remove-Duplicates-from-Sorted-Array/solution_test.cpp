#include <catch2/catch_test_macros.hpp>
#include <catch2/matchers/catch_matchers_string.hpp>
#include <catch2/matchers/catch_matchers_vector.hpp>

#include "solution.hpp"


TEST_CASE( "Running solution test 1" ) {
    vector<int> nums{1, 1, 2};

    int result = Solution().removeDuplicates(nums);

    int expected = 2;
    vector<int> expected_nums{1, 2};

    REQUIRE( result == expected );
    REQUIRE_THAT( vector<int>(nums.begin(), nums.begin() + expected), Catch::Matchers::Equals(expected_nums) );
}

TEST_CASE( "Running solution test 2" ) {
    vector<int> nums{0,0,1,1,1,2,2,3,3,4};

    int result = Solution().removeDuplicates(nums);

    int expected = 5;
    vector<int> expected_nums{0,1,2,3,4};

    REQUIRE( result == expected );
    REQUIRE_THAT( vector<int>(nums.begin(), nums.begin() + expected), Catch::Matchers::Equals(expected_nums) );
}

TEST_CASE( "Running solution test 3" ) {
    vector<int> nums{};

    int result = Solution().removeDuplicates(nums);

    int expected = 0;
    vector<int> expected_nums{};

    REQUIRE( result == expected );
    REQUIRE_THAT( vector<int>(nums.begin(), nums.begin() + expected), Catch::Matchers::Equals(expected_nums) );
}
