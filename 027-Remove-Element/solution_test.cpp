#include <catch2/catch_test_macros.hpp>
#include <catch2/matchers/catch_matchers_string.hpp>
#include <catch2/matchers/catch_matchers_vector.hpp>

#include "solution.hpp"


TEST_CASE( "Running solution test 1" ) {
    vector<int> nums{3,2,2,3};
    int val = 3;

    int result = Solution().removeElement(nums, val);

    int expected = 2;
    vector<int> expected_nums{2, 2};

    REQUIRE( result == expected );
    REQUIRE_THAT( vector<int>(nums.begin(), nums.begin() + expected), Catch::Matchers::Equals(expected_nums) );
}

TEST_CASE( "Running solution test 2" ) {
    vector<int> nums{0,1,2,2,3,0,4,2};
    int val = 2;

    int result = Solution().removeElement(nums, val);

    int expected = 5;
    vector<int> expected_nums{0,1,4,0,3};

    REQUIRE( result == expected );
    REQUIRE_THAT( vector<int>(nums.begin(), nums.begin() + expected), Catch::Matchers::Equals(expected_nums) );
}

TEST_CASE( "Running solution test 3" ) {
    vector<int> nums{};
    int val = 0;

    int result = Solution().removeElement(nums, val);

    int expected = 0;
    vector<int> expected_nums{};

    REQUIRE( result == expected );
    REQUIRE_THAT( vector<int>(nums.begin(), nums.begin() + expected), Catch::Matchers::Equals(expected_nums) );
}

TEST_CASE( "Running solution test 4" ) {
    vector<int> nums{5};
    int val = 5;

    int result = Solution().removeElement(nums, val);

    int expected = 0;
    vector<int> expected_nums{};

    REQUIRE( result == expected );
    REQUIRE_THAT( vector<int>(nums.begin(), nums.begin() + expected), Catch::Matchers::Equals(expected_nums) );
}
