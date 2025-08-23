#include <catch2/catch_test_macros.hpp>
#include <catch2/matchers/catch_matchers_string.hpp>
#include <catch2/matchers/catch_matchers_vector.hpp>

#include "solution.hpp"


TEST_CASE( "Running solution test 1" ) {
    vector<vector<int>> matrix{
        { 1, 2, 3 },
        { 4, 5, 6 },
        { 7, 8, 9 }
    };
    vector<int> result = Solution().spiralOrder(matrix);

    vector<int> expected{1,2,3,6,9,8,7,4,5};

    REQUIRE( result.size() == expected.size() );
    REQUIRE_THAT( result, Catch::Matchers::Equals(expected) );
}

TEST_CASE( "Running solution test 2" ) {
    vector<vector<int>> matrix{
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9,10,11,12}
    };
    vector<int> result = Solution().spiralOrder(matrix);

    vector<int> expected{1,2,3,4,8,12,11,10,9,5,6,7};

    REQUIRE( result.size() == expected.size() );
    REQUIRE_THAT( result, Catch::Matchers::Equals(expected) );
}
