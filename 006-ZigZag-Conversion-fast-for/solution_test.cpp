#include <catch2/catch_test_macros.hpp>
#include <catch2/matchers/catch_matchers_string.hpp>
#include <catch2/matchers/catch_matchers_vector.hpp>

#include "solution.hpp"


TEST_CASE( "Running solution test 1" ) {
    string input = "PAYPALISHIRING";
    int numRows = 3;

    string expected = "PAHNAPLSIIGYIR";

    REQUIRE_THAT( Solution().convert(input, numRows), Catch::Matchers::Equals(expected) );
}

TEST_CASE( "Running solution test 2" ) {
    string input = "PAYPALISHIRING";
    int numRows = 4;

    string expected = "PINALSIGYAHRPI";

    REQUIRE_THAT( Solution().convert(input, numRows), Catch::Matchers::Equals(expected) );
}
