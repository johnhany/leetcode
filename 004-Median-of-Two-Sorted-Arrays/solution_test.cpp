#include <catch2/catch_test_macros.hpp>
#include <catch2/matchers/catch_matchers_floating_point.hpp>
#include <catch2/matchers/catch_matchers_string.hpp>
#include <catch2/matchers/catch_matchers_vector.hpp>

#include "solution.hpp"


TEST_CASE( "Running solution test 1" ) {
    vector<int> num1{1, 3};
    vector<int> num2{2};

    float expected = 2.0;

    REQUIRE_THAT( expected, Catch::Matchers::WithinAbs(Solution().findMedianSortedArrays(num1, num2), 0.01) );
}

TEST_CASE( "Running solution test 2" ) {
    vector<int> num1{1, 2};
    vector<int> num2{3, 4};

    float expected = 2.5;

    REQUIRE_THAT( expected, Catch::Matchers::WithinAbs(Solution().findMedianSortedArrays(num1, num2), 0.01) );
}
