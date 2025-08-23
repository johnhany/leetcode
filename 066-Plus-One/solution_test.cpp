#include <catch2/catch_test_macros.hpp>
#include <catch2/matchers/catch_matchers_string.hpp>
#include <catch2/matchers/catch_matchers_vector.hpp>

#include "solution.hpp"


TEST_CASE( "Running solution test 1" ) {
    vector<int> digits{1,2,3};
    vector<int> result = Solution().plusOne(digits);

    vector<int> expected{1,2,4};

    REQUIRE_THAT( result, Catch::Matchers::Equals(expected) );
}

TEST_CASE( "Running solution test 2" ) {
    vector<int> digits{4,3,2,1};
    vector<int> result = Solution().plusOne(digits);

    vector<int> expected{4,3,2,2};

    REQUIRE_THAT( result, Catch::Matchers::Equals(expected) );
}

TEST_CASE( "Running solution test 3" ) {
    vector<int> digits{1,2,9};
    vector<int> result = Solution().plusOne(digits);

    vector<int> expected{1,3,0};

    REQUIRE_THAT( result, Catch::Matchers::Equals(expected) );
}

TEST_CASE( "Running solution test 4" ) {
    vector<int> digits{9,9};
    vector<int> result = Solution().plusOne(digits);

    vector<int> expected{1,0,0};

    REQUIRE_THAT( result, Catch::Matchers::Equals(expected) );
}
